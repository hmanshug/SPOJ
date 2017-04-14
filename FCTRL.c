#include <stdio.h>

int main() {
	int test;
	scanf("%d", &test);
	int num, power, sum;
	
	while(test!=0) {
		scanf("%d", &num);
		
		power=5;
		sum=0;
		while(power<=num) {
			sum=sum+ num/power;
			power=power*5;
		}
		printf("%d\n", sum);
		
		test--;
	}
	return 0;
}
