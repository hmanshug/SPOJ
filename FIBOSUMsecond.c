#include <stdio.h>
#include <math.h>
double FIB(int x) {
	return ((double)pow(1.0+(double)sqrt(5.0), x)-(double)pow(1.0-(double)sqrt(5.0), x))/(double)(pow(2, x)*sqrt(5.0));
}
int main() {
	int test;
	double sum;
	int N, M, i;
	int F, S, temp;
	scanf("%d", &test);
	
	while(test--) {
		scanf("%d%d", &N, &M);
		sum=0;
		sum=(double)(FIB(M+2) - FIB(N+1));
		printf("%.0lf\n", sum);
	}
	return 0;
}

