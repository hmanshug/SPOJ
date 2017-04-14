#include <stdio.h>

int main() {
	int test, sum;
	int N, M, i;
	int F, S, temp;
	scanf("%d", &test);
	
	while(test--) {
		scanf("%d%d", &N, &M);
		sum=0;
		for(i=0, S=0; i<=M; i++) {
			if(i==0) {
				F=0;	
			}
			else if(i==1) {
				F=1;
			}
			else {
				temp=F+S;
				S=F;
				F=temp%1000000007;	
			}

			
			if(i>=N)
				sum=(sum+F)%1000000007;
		}
		printf("%d\n", sum);
	}
	return 0;
}
