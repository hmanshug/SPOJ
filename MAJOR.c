#include <stdio.h>

int main() {
	int test, NUM, arr[2001];
	int i, temp;
	scanf("%d", &test);
	
	while(test--) {
		scanf("%d", &NUM);
		for(i=0; i<2001; i++)
			arr[i]=0;

		for(i=0; i<NUM; i++) {
			scanf("%d", &temp);
			arr[temp+1000]++;
		}
		for(i=0; i<2001; i++) {
			if(arr[i]>(NUM/2)) {
				printf("YES %d\n", i-1000);
				break;
			}
			arr[i]=0;
			if(i==2000)
				printf("NO\n");
		}
	}
	return 0;
}
