#include <stdio.h>

int main() {
	int range;
	scanf("%d", &range);
	int num, temp;
	scanf("%d", &temp);
	while(--range!=0) {
		scanf("%d", &num);
		temp=temp ^ num;
	}
	printf("%d\n", temp);
	return 0;
}
