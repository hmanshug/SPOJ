#include <stdio.h>

int main() {
	
	int test;
	scanf("%d", &test);
	long long third, tlast, sum;
	long long a, d, n, i;
	
	while(test!=0) {
		scanf("%lld%lld%lld", &third, &tlast, &sum);
		n=2*sum/(third+tlast);
		d=(tlast-third)/(n-5);
		a=third-2*d;
		
		printf("%lld\n", n);
		for(i=0; i<n; i++)
			printf("%lld ", a+i*d);
		printf("\n");
		test--;
	}
	
	return 0;
}
