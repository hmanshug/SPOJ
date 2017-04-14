#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int N, M, *H, i;
	int MAX=0, sum=0, count=0;
	int temp;
	scanf("%d%d", &N, &M);
	H= (int *)malloc(sizeof(int)*(N+1));
	
	for(i=0; i<N; i++)
		scanf("%d", &H[i]);
	H[N]=10000001;
	
	for(i=0; i<=N; i++) {
		
		if(H[i]>M) {
			if(MAX<sum)
			MAX=sum;
			sum=0;
			count=i+1;
			continue;
		}
		if(H[i]==M  || sum==M) {
			MAX=M;
			break;
		}
		temp=sum;
		sum=sum+H[i];
		
		while(sum>M) {
			if(MAX<temp)
			MAX=temp;
			sum=sum-H[count];
			temp=temp-H[count];
			count++;	
		}	
	}
	
	printf("%d\n", MAX);
	return 0;
}
