#include <stdio.h>
int arr[500001];
char check[3012500];
void pre() {
	memset(check, '0', 3012500*sizeof(char));
	int i;
	arr[0]=0;
	check[0]='1';
	for(i=1; i<=500000; i++) {
		if(arr[i-1]-i >0 && check[arr[i-1]-i]=='0') {
			arr[i]=arr[i-1]-i;
			check[arr[i-1]-i]='1';
		} else {
			arr[i]=arr[i-1]+i;
			check[arr[i-1]+i]='1';
		}
	}
}
int main() {
	int num;
	pre();
	
	while(1) {
		scanf("%d", &num);
		if(num==-1)
		break;
		
		printf("%d\n", arr[num]);
	}
	return 0;
}

