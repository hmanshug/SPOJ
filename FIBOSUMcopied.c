#include <stdio.h>
#include <string.h>

#define MOD 1000000007
#define ULL unsigned long long 

void mul(ULL a[][2] , ULL b[][2])
{
	int i, j, k;
    ULL res[2][2];
    memset(res , 0 , sizeof(res));
    for(i = 0 ; i < 2 ; i ++)
        for(j = 0 ; j < 2 ; j++)
            for(k = 0 ; k < 2 ; k++)
                res[i][j] = (res[i][j] + a[i][k]*b[k][j]) % MOD;
    for(i = 0 ; i < 2 ; i++)
        for(j = 0 ; j < 2 ; j++)
            a[i][j] = res[i][j];
}
ULL  power( ULL  n)
{
    ULL  fib[2][2] = { {1 , 1} , { 1 , 0}},temp[2][2] = { {1 , 0 } , { 0 , 1}};
    while(n)
    {
        if(n&1)
            mul(temp , fib);
        mul(fib , fib);
        n>>=1;
    }
    return temp[0][1];
}
int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        ULL l , r;
        scanf("%llu%llu", &l, &r);
        //printf("%d", power(3));
        printf("%d\n", power(r+2)%MOD - power(l+1) %MOD);
    }
    return 0;
}
