#include <stdio.h>
#include <stdlib.h>
int cache[4000000]={0};
long long bytelandian(n) {
	long long i, a, b, c;
	
	for(i=0; i<12; i++)
		if(n==i)
			return n;
	if(n<=4000000 && cache[n]!=0)
		return cache[n];
	
	a=bytelandian(n/2);
	b=bytelandian(n/3);
	c=bytelandian(n/4);
	if(a<(n/2))
		a=n/2;
	if(b<(n/3))
		a=n/3;
	if(c<(n/4))
		a=n/4;
	
	if(n<=4000000)
		cache[n]=a+b+c;
	return a+b+c;
		
}
int main() {
	int num, t;

	for(t=0;t<10;t++) {
		scanf("%d", &num);
		printf("%lld\n", bytelandian(num));
		
	}
}


