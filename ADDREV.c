#include <stdio.h>
#include <math.h>

int rev_num(int);

int main() {
	int test;
	scanf("%d", &test);
	int num1, num2;
	int rnum1, rnum2;
	
	while(test!=0) {
		scanf("%d%d", &num1, &num2);
		rnum1=rev_num(num1);
		rnum2=rev_num(num2);
		num1=rnum1+rnum2;
		printf("%d\n", rev_num(num1));
		test--;
	}
}

int rev_num(int num) {
	
	int pnum=num, n;
	int p=0, sum=0;
	while(num!=0) {
		num=num/10;
		p++;
	}
	
	while(pnum!=0) {
		n=pnum%10;
		pnum=pnum/10;
		sum=sum+n*pow(10, (p-1));
		p--;
	}
	
	return sum;
}
