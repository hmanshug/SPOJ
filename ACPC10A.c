#include <stdio.h>

int main() {
	int a1, a2, a3;
	
	scanf("%d", &a1);
	scanf("%d", &a2);
	scanf("%d", &a3);
	
	while(a1!=0 || a2!=0 || a3!=0) {
		
		if(a3-a2==a2-a1) {
			printf("%s %d\n", "AP", a3+a3-a2);
		}
		else if(a3/a2==a2/a1) {
			printf("%s %d\n", "GP", a3*(a3/a2));
		}
		
		scanf("%d", &a1);
		scanf("%d", &a2);
		scanf("%d", &a3);
	}
	
	return 0;
}

