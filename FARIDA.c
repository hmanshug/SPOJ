#include <stdio.h>
int C[10001], N;
long long cache[10001];
long long max(long long a, long long b) {
	return (a>b ? a : b);
}

long long COINS(long long x) {
	if(x> N-1)
		return 0;
	if(cache[x]!=-1)
		return cache[x];
		
	return cache[x]= max(C[x]+ COINS(x+2), COINS(x+1));
}

int main() {
	int test, i, k=1;
	scanf("%d", &test);
	
	
	
	while(k<=test) {
		scanf("%d", &N);
		for(i=0; i<N; i++)
			cache[i]=-1;
		for(i=0; i<N; i++)
			scanf("%d", &C[i]);
		
		printf("Case %d: %lld\n", k++, COINS((long long)0));
	}
	
	return 0;
}

