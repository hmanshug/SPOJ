#include <stdio.h>
#define INF 9999999

int arr[100][100];
int row, col;
int cache[100][100];

int min(int a, int b, int c, int d) {
	if(a<=b && a<=c && a<=d)
		return a;
	else if(b<=c && b<=a && b<=d)
		return b;
	else if(c<=b && c<=a && c<=d)
		return c;
	else
	return d;
}

int PSTONE(int x, int y) {
	if(x>=row)
	return 0;
	
	if(y<0 || y>=col) 
		return INF;
	
	if(cache[x][y]!=-1)
		return cache[x][y];
	if(x==0)
		return cache[x][y]= min(PSTONE(x, y+1), PSTONE(x+1, y-1) + arr[x][y], PSTONE(x+1, y) + arr[x][y], PSTONE(x+1, y+1) + arr[x][y]);
	else
		return cache[x][y]= min(INF, PSTONE(x+1, y-1) + arr[x][y], PSTONE(x+1, y) + arr[x][y], PSTONE(x+1, y+1) + arr[x][y]);
}

int main() {
	int i, j;
	scanf("%d%d", &row,&col);
	
	for(i=0; i<row; i++)
		for(j=0; j<col; j++)
			cache[i][j]=-1;
			
	for(i=0; i<row; i++)
		for(j=0; j<col; j++)
			scanf("%d", &arr[i][j]);
	
	printf("%d\n", PSTONE(0,0));
	return 0;
	
}
