#include<stdio.h>
#define min(A,B) ((A < B) ? A : B)

int main(void) { 
	int test;
	scanf("%d", &test);
	int i,WE,WF,j, noc; 
	while(test--) { 
		scanf("%d %d %d",&WE,&WF, &noc);  
		int coin[noc+1],wt[noc+1]; 
		for(i=0;i<noc;i++) 
		scanf("%d %d",&coin[i],&wt[i]); 
		int K[noc+1][WF-WE+1];
		//Basic Knapsack Problem
		for(i=0;i<=noc;i++) {
		 	for(j=0;j<=(WF-WE);j++) {
				if(i == 0 || j == 0) 
				K[i][j] = 0; 
				else if(wt[i-1] <= j)
			 	K[i][j] = min(wt[i-1] + K[i-1][j-coin[i-1]],K[i-1][j]);
			 	else 
				K[i][j] = K[i-1][j]; 
			}
	 	} 
		//2nd part of the problem where we want to find minimum cost for maximum fun. 
		int best = K[noc][WF-WE];
		for(i=0;i<=noc;i++) 
		if(K[i][noc]<best) {
			best=K[i][noc];
		}
		printf("%d\n",best);
	} 
	return 0;
}
