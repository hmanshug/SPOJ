#include <stdio.h>
#define INF 999999

int main() {
	int test;
	scanf("%d", &test);
	char str[185][185];
	int i,j,k,l;
	int min, x, y, flag=0;
	int row, col;
	
	while(test--!=0) {
		scanf("%d%d", &row, &col);
		for(i=0;i<row; i++)
			scanf("%s", str[i]);
		
		for(i=0; i<row; i++) {
			for(j=0; j<col; j++) {
				if(str[i][j]=='1') {
					printf("0 ");	
				}
				
				else {
					min=INF;
					for(k=0; k<row; k++) {
						for(l=0; l<col; l++) {
							
							if(str[k][l]=='1') {
								x=i-k;
								y=j-l;
								if(x<0)
								x=x*-1;
								if(y<0)
								y=y*-1;
								
								x=x+y;
								if(min>x)
									min=x;
							}
							if(min==1) {
								flag=1;
								break;
							}
						}
						if(flag==1) {
							flag=0;
							break;
						}
					}
					printf("%d ", min);
				}
			}
			printf("\n");
		}
	}
}
