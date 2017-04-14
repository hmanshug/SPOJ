#include <stdio.h>
#include <math.h>

int main() {
	int test;
	scanf("%d", &test);
	
	int base;
	long int power;
	
	while(test!=0) {
		test--;
		scanf("%d", &base);
		scanf("%ld", &power);
		if(power==0) {
			printf("%d\n", 1);
			continue;
		}
		
		
		base=base%10;
		power=(power%4);
		if(power==0)
		power=4;
		
		if(base==0 || base==6 || base==5 || base==1) {
			printf("%d\n", base);
		}
		else {
			printf("%d\n", (int)pow(base, power)%10);
		}
		/*else if(base==4 || base==9) {
			power=(power%2);
			if(power==1)
			printf("%d\n", base);
			else if(base==4)
			printf("%d\n", base+2);
			else if(base==9)
			printf("%d\n", 1);
			
		}
		else if(base==3) {
			if(power==1)
			printf("%d\n", 3);
			else if(power==2)
			printf("%d\n", 9);
			else if(power==3)
			printf("%d\n", 7);
			else
			printf("%d\n", 1);
		}
		else if(base==2) {
			if(power==1)
			printf("%d\n", 2);
			else if(power==2)
			printf("%d\n", 4);
			else if(power==3)
			printf("%d\n", 8);
			else
			printf("%d\n", 6);
		}
		else if(base==7) {
			if(power==1)
			printf("%d\n", 7);
			else if(power==2)
			printf("%d\n", 9);
			else if(power==3)
			printf("%d\n", 3);
			else
			printf("%d\n", 1);
		}
		else if(base==8) {
			if(power==1)
			printf("%d\n", 8);
			else if(power==2)
			printf("%d\n", 4);
			else if(power==3)
			printf("%d\n", 2);
			else
			printf("%d\n", 6);
		}
		*/
	
	}
	
	return 0;
}
