#include <stdio.h>
int MIN=200;

int main() {
	int i, data[10], sum=0, temp;
	
	for(i=0; i<10; i++) {
		scanf("%d", &data[i]);
		sum=sum+data[i];
		if(sum<=100)
			if((100-sum)<=MIN) {
				MIN=100-sum;
				temp=sum;
			}
			
		
		if(sum>100)
			if((sum-100)<=MIN) {
				MIN=sum-100;
				temp=sum;
			}
			
	}
	printf("%d\n", temp);
	return 0;
}
