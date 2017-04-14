#include <stdio.h>

int main() {
	int num;
	scanf("%d", &num);
	num%=10;
	if(num==0)
	printf("2\n");
	else
	printf("1\n%d\n", num);
	
	return 0;
}
