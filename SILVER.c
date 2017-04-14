#include <stdio.h>

int main() {
	int temp, count;
	
	while(1) {
		scanf("%d", &temp);
		count=0;
		if(temp==0)
		break;
		
		while(temp/2 !=0) {
			temp/=2;
			count++;
		}
		printf("%d\n", count);
	}
	return 0;
}
