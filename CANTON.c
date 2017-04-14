#include <stdio.h>

int main() {
	int test, num;
	scanf("%d", &test);
	int row, sum, rnum;
	
	while(test!=0) {
		scanf("%d", &num);
		row=1;
		sum=0;
		while(sum<num) {
			sum=sum+ row;
			row++;
			
		}
		
		//printf("%d %d", row, sum);
		
		row--;
		rnum= num- (sum-row);
		
		if(row%2==0) {
			printf("TERM %d IS %d/%d\n", num,  rnum, row-rnum+1);
		} else {
			printf("TERM %d IS %d/%d\n", num, row-rnum+1, rnum);
		}
		
		test--;
	}
	
	return 0;
}
