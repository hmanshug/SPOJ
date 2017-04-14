#include <stdio.h>

int prime[100000];
short check[1000009];

int gcd(int a, int b) {
	if(b==0)
		return a;
	
	return gcd(b, a%b);
}

void pre()
{
	int i, j;
    for(i = 3 ; i<=1000 ; i+=2)
    {
        if(!check[i])
        {
            for(j = i*i ; j<=1000000 ; j+=i)
                check[j] = 1;
        }
    }
    j  = 1;
    prime[0] = 2;
    for(i = 3; i <=1000000 ; i+=2)
        if(!check[i])
            prime[j++] = i;
}
int main()
{
    pre();
    int i, t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        long long  G = gcd(a,b);
        long long  res = 1;
        if(G == 1)
        {
            printf("1\n");
            continue;
        }
        //1000000: 78498 primes we have to check only these
        for(i = 0 ;i <= 78500 && prime[i] <= G  && G; i++)
        {
            int count = 0;
            while(G%prime[i] == 0)
            {
                count++;
                G/=prime[i];
            }
            res *= (count + 1);
            //2^m*2^n:: (m+1)(n+1) ways
        }
        //if(G > 1)
            //res *= 2;
        printf("%lld\n",res);
    }
    return 0;
}
