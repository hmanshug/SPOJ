#include <stdio.h>

int main() {
	char str1[1001];
	char str2[1001];
	int check[26]={0}, check2[26]={0};
	int bool, i, j, temp;
	
	while(1) {
		
		bool=scanf("%s", str1);
		if(bool<0)
		break;
		scanf("%s", str2);
		
		for(i=0; str1[i]!='\0'; i++) {
			check[str1[i]-97]++;
		}
		for(i=0; str2[i]!='\0'; i++) {
			if(check[str2[i]-97]>0) {
				check2[str2[i]-97]++;
			}
				
		}
		for(i=0; i<26; i++) {
			if(check2[i]>0) {
				temp=check2[i];
				if(check[i]<check2[i])
					temp=check[i];
				for(j=0; j<temp; j++)
					printf("%c", 97+i);
			}
				
			check[i]=0;
			check2[i]=0;
		}
		printf("\n");
	}
	return 0;
}
