#include <stdio.h>

int main() {
	int test;
	long long num;
	scanf("%d",&test);
	
	while(test!=0) {
		scanf("%lld", &num);
		printf("%lld\n", 10*(19+ (num-1)*25)+2);
		test--;
	}
	
	return 0;
}
