#include <stdio.h>
#include <math.h>

int main() {
	int test;
	scanf("%d", &test);
	int num, size, temp, sum;
	
	while(test!=0) {
		scanf("%d", &num);
		size=0;
		sum=0;
		temp=num;
		
		if(num%2==0) {
			while(num!=0) {
				num= num/2;
				size++;
			}
			while(temp!=0) {
				sum= sum+ (temp%2)*pow(2, --size);
				temp=temp/2;
			}
			printf("%d\n", sum);
		} else {
			printf("%d\n", num);
		}
		test--;
	}
	
	return 0;
}
