#include <stdio.h>
#include <math.h>

int main(){
	int test;
	scanf("%d", &test);
	
	int start, end, i, j;
	int flag=0, sqr;
	while(test!=0) {
		scanf("%d%d", &start, &end);
		
		for(i=start; i<=end; i++) {
			
			if(i==2 || i==3)
			printf("%d\n", i);
			
			flag=0;
			sqr=(int)sqrt(i);
			for(j=2; j<=sqr; j++) {
				if(i%j==0) {
					break;
				}
				if(j==sqr) 
				printf("%d\n", i);
			}
			
		}
		printf("\n");
		test--;
	}
}
