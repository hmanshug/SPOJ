#include <stdio.h>
#include <stdlib.h>

int nodes;
int adjmat[10000][10000];
int visit[10000]={0};
int size[10000]={0};
int SUM;

int main() {
	 int i, j, x, y, test=1;
	 int temp, MAX=0;
	 scanf("%d", &nodes);
	 
	 for(i=0; i<nodes; i++)
	 	for(j=0; j<nodes; j++)
	 		adjmat[i][j]=0;
	 
	 
	 while(test++<nodes) {
	 	scanf("%d%d", &x, &y);
	 	adjmat[x-1][size[x-1]]=y;
	 	adjmat[y-1][size[y-1]]=x;
	 	size[x-1]++;
	 	size[y-1]++;
	}
	 /*
	 for(i=0; i<nodes; i++) {	
	 	temp=DFS(i+1);
	 	if(temp>MAX)
	 		MAX=temp;
	 		
 		for(j=0; j<nodes; j++) {
 			visit[j]=0;
	 	}
	 }
	 */
	 DFS(1);
	 printf("%d\n", SUM);
	  
	 return 0;
}

int DFS(int v) {
	visit[v-1]=1;
	int i, temp;
	int MAX=0, MAX1=0;
	for(i=0; i<size[v-1]; i++) {
		if((visit[adjmat[v-1][i]-1]!=1)) {
			temp=1+DFS(adjmat[v-1][i]);
		
			if(temp>MAX) {
				MAX1=MAX;
				MAX=temp;
				
			}
			else if(temp>MAX1)
				MAX1=temp;
		}
	}
	SUM=MAX+MAX1;
	return MAX;
}
