#include <stdio.h>

int arr[100][100];
int row, col;
int cache[100][100];

int max(int a, int b, int c, int d) {
	if(a>=b && a>=c && a>=d)
		return a;
	else if(b>=c && b>=d && b>=a)
		return b;
	else if(c>=b && c>=d && c>=a)
		return c;
	else
		return d;
}

int PSTONE(int x, int y) {
	if(x>=row || y<0 || y>=col) 
		return 0;
	if(cache[x][y]!=-1)
		return cache[x][y];
	if(x==0)
		return cache[x][y]= max(PSTONE(x, y+1), PSTONE(x+1, y-1) + arr[x][y], PSTONE(x+1, y) + arr[x][y], PSTONE(x+1, y+1) + arr[x][y]);
	else
		return cache[x][y]= max(0, PSTONE(x+1, y-1) + arr[x][y], PSTONE(x+1, y) + arr[x][y], PSTONE(x+1, y+1) + arr[x][y]);
}
int main() {
	int test, i, j;
	scanf("%d", &test);
	
	
	while(test--) {
		scanf("%d%d", &row, &col);
		for(i=0; i<100; i++)
			for(j=0; j<100; j++)
				cache[i][j]=-1;
		for(i=0; i<row; i++)
			for(j=0; j<col; j++)
				scanf("%d", &arr[i][j]);
		
		printf("%d\n", PSTONE(0,0));
	}
	return 0;
}



