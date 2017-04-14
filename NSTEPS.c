#include <stdio.h>

int main() {
	int test;
	scanf("%d", &test);
	
	float num1, num2;
	int inum1, inum2;
	
	while(test!=0) {
		scanf("%f%f", &num1, &num2);
		
		if(num1== (int)num1 && num2 == (int) num2 && num1>=0 && num2>=0 && num1<=10000 && num2<=10000) {
		
		inum1= (int) num1;
		inum2= (int) num2;
		if((inum1%2==0 && inum2%2==0 )&&(inum1==inum2 || inum1== (inum2+2)) ) 
		printf("%d\n", inum1+inum2);
		else if((inum1%2!=0 && inum2%2!=0 )&& (inum1==inum2 || inum1== (inum2+2)))
		printf("%d\n", inum1+inum2-1);
		else
		printf("No Number\n");
	}
	else
	printf("No Number\n");
	
		test--;
	}
	
	return 0;
}


