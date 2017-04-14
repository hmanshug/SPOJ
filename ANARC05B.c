#include <stdio.h>

int main() {
	long long A, B;
	long long S1[10000], S2[10000];
	long long SUM, SUM1, SUM2, FINAL;
	int i, j;
	
	while(1) {
		SUM=0; SUM1=0; SUM2=0; FINAL=0;
		scanf("%lld", &A);
		if(A==-1)
			break;
			
		for(i=0; i<A; i++)
			scanf("%lld", &S1[i]);
			
		scanf("%lld", &B);
		
		for(i=0; i<B; i++)
			scanf("%lld", &S2[i]);
		
		for(i=0, j=0; i+j<=(A+B-1); ) {
			if(S1[i]==S2[j]) {
				SUM= SUM2;
				if(SUM1>SUM2)
					SUM= SUM1;
				FINAL+= SUM+ S1[i];
				i++;
				j++;
				SUM=0; SUM1=0; SUM2=0;
			} else if((S1[i]>S2[j] && j<B)|| i==A) {
				SUM2+=S2[j];
				j++;
			} else if((S1[i]<S2[j] && i<A) || j==B){
				SUM1+=S1[i];
				i++;
			}
		}
		SUM= SUM2;
		if(SUM1>SUM2)
			SUM= SUM1;
		FINAL+= SUM;
		printf("%lld\n", FINAL);
		
	}
	return 0;
}
