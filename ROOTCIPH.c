#include <stdio.h>

int main() {
	int test;
	long long A, B, C;
	scanf("%d", &test);
	
	while(test--) {
		scanf("%lld%lld%lld", &A, &B, &C);
		printf("%lld\n", A*A - 2*B);
	}
	return 0;
}
