#include <stdio.h>
void long_fac();
int sol[160];
int solsize;

int main() {
	int test;
	scanf("%d", &test);
	
	int num;
	while(test!=0) {
		scanf("%d", &num);
		long_fac(num);
		test--;
	}
	return 0;
}

void long_fac(int num) {
	int i, carry=0, temp;
	int var=2;
	sol[0]=1;
	solsize=1;
	while(var<=num) {
		
		for(i=0; i<solsize; i++) {
			temp= sol[i]*var+carry;
			sol[i]=temp%10;
			carry=temp/10;
			
		}
		while(carry!=0) {
			sol[solsize]=carry%10;
			carry=carry/10;
			solsize++;
		}
		
		var++;
	}
	
	for(i=solsize-1; i>=0; i--) {
		printf("%d", sol[i]);
	}
	printf("\n");
	
	
}
