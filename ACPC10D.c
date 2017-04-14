#include <stdio.h>
#define  INF 99999999999
int row, arr[100000][3];
long long cache[1000000][3];
//CODE not working.........................................
long long min(long long a, long long b) {
	return a<b ? a: b;
}

long long TGRAPH(int x, int y) {
	if(y<0 || y>2)
		return INF;
	if((x==row-1 && y==2) || (x==row))
		return 0;
	
	if(cache[x][y]!=INF)
		return cache[x][y];
		
	//if(x==0) 
		return 	cache[x][y]= min(TGRAPH(x+1, y-1)+ arr[x][y], min(TGRAPH(x+1, y)+ arr[x][y], min(TGRAPH(x+1, y+1)+ arr[x][y], TGRAPH(x, y+1)+ arr[x][y])));
	//else
		//return cache[x][y]= min(TGRAPH(x+1, y-1)+ arr[x][y], min(TGRAPH(x+1, y)+ arr[x][y], TGRAPH(x+1, y+1)+ arr[x][y]));
}
int main() {
	int i, j, test=1;
	
	while(1) {
		scanf("%d", &row);
		if(row==0)
			break;
		for(i=0; i<row; i++)
		for(j=0; j<3; j++)
			cache[i][j]=INF;
			
		for(i=0; i<row; i++)
			for(j=0; j<3; j++)
				scanf("%d", &arr[i][j]);
				
		 
		printf("%d. %lld\n", test++, TGRAPH(0, 1));
	}
	return 0;
}
