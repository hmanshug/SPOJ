#include <stdio.h>
#include <string.h>

int main() {
	char str[100001];
	scanf("%s", str);
	int test;
	scanf("%d", &test);
	
	char sub[2001];
	int lenstr=strlen(str), lensub;
	int i, j;
	
	while(test!=0) {
		scanf("%s", sub);
		lensub=strlen(sub);
		j=0;
		//flag=0;
		for(i=0; i<lenstr; ++i){
			if(str[i]==sub[j] && j==0) {
				++j;
				//flag++;
			}
			
			else if(j>0 && str[i]==sub[j] && str[i-1]==sub[j-1]) {
				++j;
				//flag++;
			}
			
			
			else if(i>0 && str[i]!=sub[j] && str[i-1]==sub[j-1]) {
				//flag=0;
				i=i-j;
				j=0;
			}
			
			
			if(j==lensub) {
				printf("Y\n");
				break;
			}
			
		}
		if(j!=lensub)
			printf("N\n");
		--test;
	}
}
