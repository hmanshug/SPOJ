#include <stdio.h>
#include <math.h>

int main() {
	int degree, t=1;
	int num, temp, i, test;
	int coef[1000];
	long long c;
	while(1) {
		scanf("%d", &degree);
		if(degree==-1)
			break;
		
		
		for(i=0; i<degree+1; i++)
			scanf("%d", &coef[i]);
			
		scanf("%d", &test);
		printf("Case %d:\n", t++);
		
		while(test--) {
			scanf("%d", &num);
			//temp=degree;
			//sum=0;
			c=coef[0];
			for(i=1; i<degree+1; i++) {
				c= coef[i]- c*(-1*num);
			}
			printf("%lld\n", c);
		}
	}
	return 0;
}
