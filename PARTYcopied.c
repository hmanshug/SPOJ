#include<stdio.h>
#define max(A,B) ((A > B) ? A : B)

int main(void) { 
	int i,W,N,j; 
	while(1) { 
		scanf("%d %d",&W,&N); 
		if(W == 0 && N == 0) 
		break; 
		int wt[N+1],val[N+1]; 
		for(i=0;i<N;i++) 
		scanf("%d %d",&wt[i],&val[i]); 
		int K[N+1][W+1];
		//Basic Knapsack Problem
		for(i=0;i<=N;i++) {
		 	for(j=0;j<=W;j++) {
				if(i == 0 || j == 0) 
				K[i][j] = 0; 
				else if(wt[i-1] <= j)
			 	K[i][j] = max(val[i-1] + K[i-1][j-wt[i-1]],K[i-1][j]);
			 	else 
				K[i][j] = K[i-1][j]; 
			}
	 	} 
		//2nd part of the problem where we want to find minimum cost for maximum fun. 
		int best = K[N][W];
		for(i=W;i;i--) 
		if(K[N][i]<best)
		break; 
		printf("%d %d\n",i+1,K[N][W]);
	} 
	return 0;
}
