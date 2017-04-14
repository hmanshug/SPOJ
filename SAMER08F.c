#include <stdio.h>

int main() {
	
	int num, sum;
	
	scanf("%d", &num);
	
	while(num!=0) {
		/*
		sum=0;
		while(num!=0) {
			sum= sum+ num*num;
			num--;
		}
		*/
		
		sum= (num*(num+1)*(2*num+1))/6;
		printf("%d\n", sum);
		scanf("%d", &num);
	}
	
}
