#include <stdio.h>
#include <math.h>

void easyprob(int num) {
	int i=0;
	
	if(num==1) {
		printf("2(0)");
		return;
	}
	if(num==2) {
		printf("2");
		return;
	}
	while((int)pow(2, i)<=num) {
		i++;
	}
	if(i-1!=1) {
		printf("2(");
		easyprob(i-1);
		printf(")");
	} else
	easyprob(2);
	
	num=num-(int)pow(2, i-1);
	if(num!=0) {
		printf("+");
		easyprob(num);	
	}
	
}

int main() {
	
	easyprob(137);
	printf("\n");
	easyprob(1315);
	printf("\n");
	easyprob(73);
	printf("\n");
	easyprob(136);
	printf("\n");
	easyprob(255);
	printf("\n");
	easyprob(1384);
	printf("\n");
	easyprob(16385);
	printf("\n");
	
	return 0;
}
