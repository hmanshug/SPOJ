#include <stdio.h>
int cmpfn(void *a, void *b ) {
	return * (int*)a - * (int*)b;
}

int main() {
	int test;
	scanf("%d", &test);
	
	int num, male[1001], female[1001];
	int sum, i;
	
	while(test!=0) {
		scanf("%d", &num);
		sum=0;
		for(i=0; i<num; i++) {
			scanf("%d", &male[i]);
		}
		for(i=0; i<num; i++) {
			scanf("%d", &female[i]);
		}
		qsort(male, num, sizeof(int), cmpfn);
		qsort(female, num, sizeof(int), cmpfn);
		
		for(i=0; i<num; i++) {
			male[i]=male[i]*female[i];
			sum=sum+male[i];
		}
		printf("%d\n", sum);
		test--;
	}
}
