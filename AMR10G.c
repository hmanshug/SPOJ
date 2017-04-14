#include <stdio.h>
#include <stdlib.h>
#define INF 999999999
int cmpfn(const void *a, const void *b ) {
	return * (int*)a - * (int*)b;
}
int main() {
	int test;
	scanf("%d", &test);
	int N,K, i;
	int *hgt, MIN;
	while(test--!=0) {
		MIN=INF;
		scanf("%d%d", &N,&K);
		hgt=(int *)malloc(sizeof(int)*N);
		for(i=0; i<N; i++)
			scanf("%d", &hgt[i]);
		if(N==1) {
			printf("0\n");
			continue;	
		}
		
		
		qsort( hgt, N, sizeof(int), cmpfn);
		for(i=0; i<=N-K; i++) {
			if(hgt[i+K-1]-hgt[i] < MIN)
			MIN=hgt[i+K-1]-hgt[i];
		}
		printf("%d\n", MIN);
	}
	return 0;
}
