#include <stdio.h>

int main() {
	int test, x, y;
	scanf("%d", &test);
	
	while(test--) {
		scanf("%d%d", &x, &y);
		if(x==y) {
			if(x%2==0)
				printf("L\n");
			else
				printf("R\n");
		} else if(x>y) {
			if((x%2==0 && y%2==0) || (x%2!=0 && y%2==0))
				printf("U\n");
			else
				printf("D\n");
		} else {
			if((x%2==0 && y%2==0) || (x%2==0 && y%2!=0))
				printf("L\n");
			else
				printf("R\n");
		}
	}
	return 0;
}
