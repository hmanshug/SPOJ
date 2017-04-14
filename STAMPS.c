#include <stdio.h>
int cmpfn(void *a, void *b ) {
	return - * (int*)a + * (int*)b;
}
int main() {
	int test;
	scanf("%d", &test);
	int stamps, friends;
	int st[1001], i, sum,j=0;
	
	while(j<test) {
		sum=0;
		scanf("%d%d", &stamps, &friends);
		for(i=0; i<friends; i++) {
			scanf("%d", &st[i]);
		}
		qsort(st, friends, sizeof(int), cmpfn);
		for(i=0; i<friends; i++) {
			sum= sum+ st[i];
			if(sum>=stamps)
			break;
		}
		printf("Scenario #%d:\n", j+1);
		if(sum>=stamps)
		printf("%d\n\n", i+1);
		else
		printf("impossible\n\n");
		j++;
	}
	
	return 0;
	
}
