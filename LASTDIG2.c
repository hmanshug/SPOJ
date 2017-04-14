#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
	int test;
	scanf("%d", &test);
	
	char base[1001];
	long long power;
	int temp;
	
	while(test!=0) {
		test--;
		scanf("%s", &base);
		scanf("%lld", &power);
		if(power==0) {
			printf("%d\n", 1);
			continue;
		}
		temp= ((int)base[strlen(base)-1])-48;
		power=(power%4);
		if(power==0)
		power=4;
		
		if(temp==0 || temp==6 || temp==5 || temp==1) {
			printf("%d\n", temp);
		}
		else {
			printf("%d\n", (int)pow(temp, power)%10);
		}
	
	}	
	return 0;
}
