#include <stdio.h>

int main() {
	float num, sum;
	scanf("%f", &num);
	int i;
	
	while(num!=0.00) {
		sum=0;
		for(i=2;;i++) {
			sum=sum+1.00/(float)i;
			if(sum>=num)
			break;
		}
		printf("%d card(s)\n", i-1);
		scanf("%f", &num);
	}
	
	return 0;
}
