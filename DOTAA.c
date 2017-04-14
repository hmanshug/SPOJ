#include <stdio.h>

int main() {
	int test;
	scanf("%d", &test);
	int P, T, D;
	int count, i, num;
	
	while(test--!=0) {
		scanf("%d%d%d", &P, &T, &D);
		count=0;
		for(i=0; i<P; i++) {
			scanf("%d", &num);
			while(num>D) {
				num-=D;
				count++;
			}
		}
		if(count>=T)
			printf("YES\n");
		else
			printf("NO\n");
	}
	
	return 0;
}
