#include <stdio.h>

int main() {
	
	short test, cas;
	scanf("%hd", &test);
	char seq[41];
	int arr[8], i;
	
	while(test--!=0) {
		scanf("%hd", &cas);
		scanf("%s", seq);
		
		for(i=0; i<8; i++)
			arr[i]=0;
		
		for(i=0; i<38; i++) {
			if(seq[i]=='T') {
				if(seq[i+1]=='T') {
					if(seq[i+2]=='T') {
						arr[0]++;
					} else {
						arr[1]++;
					}
				} else {
					if(seq[i+2]=='T') {
						arr[2]++;
					} else {
						arr[3]++;
					}
				}
			} else {
				if(seq[i+1]=='T') {
					if(seq[i+2]=='T') {
						arr[4]++;
					} else {
						arr[5]++;
					}
				} else {
					if(seq[i+2]=='T') {
						arr[6]++;
					} else {
						arr[7]++;
					}
				}
			}
		}
		printf("%d ", cas);
		for(i=0; i<8; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
	
return 0;
}
