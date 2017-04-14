#include <stdio.h>
#include <math.h>

int main() {
	int num;
	scanf("%d", &num);
	
	
	int lim = floor(sqrt(num)); 
	int sum=0, i; 
	
	for(i=1;i<=lim;i++) { 
		sum=sum+ floor(num/i) - (i-1); 
	}
	
	printf("%d\n", sum);
	return 0;
}
