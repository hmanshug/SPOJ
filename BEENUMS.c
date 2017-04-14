#include <stdio.h>

int main() {
	int num, i, temp;
	scanf("%d", &num);
	
	while(num!=-1) {
		i=0;
		temp=0;
		while(temp<num) {
			temp= 1+ 6*((i*(i+1))/2);
			if(temp==num)
			printf("Y\n");	
			i++;
		}
		if(temp>num)
		printf("N\n");
		scanf("%d", &num);
	}
	return 0;
}



