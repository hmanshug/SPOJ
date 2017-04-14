#include <stdio.h>

int main() {
	short test;
	scanf("%hd",&test);
	long long n;
	while(test!=0) {
		scanf("%lld", &n);
		printf("%lld\n", (3*(n*(n+1)/2)-n)%1000007);
		test--;
	}
	return 0;
}
