#include <stdio.h>

int main() {
	int test, i=1;
	scanf("%d", &test);
	double n;
	
	while(test!=i-1) {
		scanf("%lf", &n);
		printf("Case %hd: %0.2lf\n", i++, (4*n*n)+0.25);
	}
	return 0;
}

