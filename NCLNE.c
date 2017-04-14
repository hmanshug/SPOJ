#include <stdio.h>

int main() {
	int test;
	scanf("%d", &test);
	int nos, i, temp, clone;
	
	while(test!=0) {
		scanf("%d", &nos);
		clone=1;
		
		for(i=1; i<=nos; i++) {
			scanf("%d", &temp);
			clone= clone-temp;
			clone=2*clone;
		}
		if(clone==0)
			printf("Yes\n");
		else
			printf("No\n");
			
		test--;
	}
	
	return 0;
}
