#include <stdio.h>

int main() {
	int test, num;
	scanf("%d", &test);
	int starter;
	
	while(test!=0) {
		scanf("%d", &num);
		scanf("%d", &starter);
		if(starter==0)
			printf("Airborne wins.\n");
		else
			printf("Pagfloyd wins.\n");
		test--;
	}
	return 0;
}
