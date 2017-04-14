#include <stdio.h>

int main() {
	
	int test;
	scanf("%d", &test);
	
	int candy[10001], sum, count, i;
	
	while(test!=-1) {
		sum=0;
		count=0;
		for(i=0; i<test;i++) {
			scanf("%d", &candy[i]);
			sum=sum+candy[i];
		}
		if(sum%test==0) {
			sum=sum/test;
			for(i=0; i<test;i++) {
				if(candy[i]>sum) {
					count=count+ (candy[i]-sum);
				}
			}
			printf("%d\n", count);
		} else {
			printf("-1\n");
		}
		scanf("%d", &test);	
	}
	
	return 0;
}
