#include <stdio.h>

int main() {
	int test, i, M[1001], N[1001];
	int A, B, MIN, j, temp;
	scanf("%d", &test);
	
	while(test--) {
		MIN=100000001;
		scanf("%d", &A);
		for(i=0; i<A;i++)
			scanf("%d", &M[i]);
		scanf("%d", &B);
		for(i=0; i<B;i++)
			scanf("%d", &N[i]);
		
		for(i=0; i<A; i++) {
			for(j=0; j<B; j++) {
				if(M[i]>N[j])
					temp=M[i]-N[j];
				else
					temp=N[j]-M[i];
				if(temp<MIN)
					MIN=temp;
				if(MIN==0)
					break;
			}
			if(MIN==0)
				break;
		}
		
		printf("%d\n", MIN);
	}
	return 0;
}

