#include <stdio.h>
int gcd(int a, int b) {
	if(b==0)
		return a;
	
	return gcd(b, a%b);
}
int main(){
	
	int test, N1, N2, count, G, i;
	scanf("%d", &test);
	
	while(test--) {
		count=0;
		scanf("%d%d", &N1, &N2);
		
		if(N2<N1)
			G= gcd(N1, N2);
		else
			G= gcd(N2, N1);
			
		
		for(i=1; i<=G; i++) {
			if(N1%i==0 && N2%i==0)
				count++;
		}
		printf("%d\n", count);
	}
}

