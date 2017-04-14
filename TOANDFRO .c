#include <stdio.h>
#include <string.h>

int main(){
	int col;
	char str[201];
	
	scanf("%d", &col);
	scanf("%s", str);
	
	int length, i, j;
	int row;
	
	while(col!=0) {
		length=strlen(str);
		row=length/col;
		if(length%col!=0)
			row++;
		
		for(j=0; j<col; j++) {
			for(i=0; i<row; i++) {
				if(i%2==0) {
					printf("%c", str[col*(i)+j]);
				} else {
					printf("%c", str[col*(i+1)-j-1]);
				}
			}
			
		}
		printf("\n");
		scanf("%d", &col);
		scanf("%s", str);
		
		
	}
}
