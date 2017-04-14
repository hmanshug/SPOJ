#include<stdio.h>

int main() {
	int range;
	scanf("%d", &range);
	int arr[100001], i;
	char flag;
	
	while(range!=0) {
		flag=0;
		for(i=1; i<=range; i++)
			scanf("%d", &arr[i-1]);
		
		for(i=1; i<=range; i++) {
			if(arr[arr[i-1]-1]!=i) {
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("not ambiguous\n");
		else
			printf("ambiguous\n");
		
		scanf("%d", &range);
	}
	
	return 0;
}
