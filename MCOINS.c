#include <stdio.h>
int K, L, test;
char arr[1000001];
void pre() {
	arr[0]='A';
	arr[K-1]='A';
	arr[L-1]='A';
	int i;
	
	for(i=1; i<=1000000; i++) {
		if(i==K-1 || i==L-1)
			continue;
		if(arr[i-1]=='B') {
			arr[i]='A';
			continue;
		}
		else if(i>=(K-1) && arr[i -K]=='B') {
			arr[i]='A';
			continue;
		} else if(i>=(L-1) && arr[i -L]=='B') {
			arr[i]='A';
			continue;
		}
		arr[i]='B';
	}
}
int main() {
	scanf("%d%d%d", &K, &L, &test);
	pre();
	int temp;
	while(test--) {
		scanf("%d", &temp);
		printf("%c", arr[temp-1]);
	}
	printf("\n");
	return 0;
}
