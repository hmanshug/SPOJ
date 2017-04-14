#include <stdio.h>
#include <stdlib.h>
int budget, nop;
int *pfee, *fun;
int budg=0, fung=0;
int findmaxfun(int l, int r, int pbud) {
	if(l>r)
	return 0;
	int maximum=0, i, a, b;
	
	for(i=l; i<=r; i++){
		if(pbud+pfee[i]<=budget) {
		a=fun[i]+findmaxfun(l, i-1, pbud+pfee[i]);
		b=fun[i]+findmaxfun(i+1, r, pbud+pfee[i]);
		if(a<b)
		a=b;
		if(maximum<a) {
			budg=budg+pfee[i];
			maximum=a;	
		}	
		}
	}
	
	return maximum;
}
int main() {
	
	scanf("%d%d", &budget, &nop);
	
	while(budget!=0 && nop!=0) {
		int i;
		pfee= (int *)malloc(sizeof(int)*nop);
		fun= (int *)malloc(sizeof(int)*nop);
		for(i=0; i<nop; i++) {
			scanf("%d%d", &pfee[i], &fun[i]);
		}
		fung=findmaxfun(0, nop-1, 0);
		printf("%d %d\n", budg, fung);
		budg=0;
		fung=0;
		scanf("%d%d", &budget, &nop);
	}
}


