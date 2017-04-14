#include <stdio.h>

int main() {
	char str[300], temp[300];
	int flag1=0, flag2=0;
	int i, j;
	while(1) {
		i=0;
		j=0;
		flag1=1;
		if(scanf("%s", str)== -1)
		break;
		// for checking java
		if(str[0]>='a' && str[0]<='z')
		for(i=0, j=0; str[i]!='\0'; i++, j++) {
			if(!((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))) {
				flag1=0;
				break;
			}
			else if(str[i]>='a' && str[i]<='z'){
				temp[j]=str[i];
			}	
			else {
				temp[j]='_';
				temp[++j]=str[i]+32;
			}
		}
		temp[j]='\0';
		if(str[i]=='\0' && flag1==1) {
			printf("%s\n", temp);
			continue;
		}
		
		i=0;
		j=0;
		flag2=1;
		//for checking c++
		if(flag1==0)
		if(str[0]>='a' && str[0]<='z')
		for(i=0, j=0; str[i]!='\0'; i++, j++) {
			if(!((str[i]>='a' && str[i]<='z') || (str[i]=='_'))) {
				flag2=0;
				break;
			}
			else if(str[i]>='a' && str[i]<='z'){
				temp[j]=str[i];
			}	
			else {
				i++;
				if(!((str[i]>='a' && str[i]<='z')) || str[i]=='\0') {
					flag2=0;
					break;
				} 
				else
					temp[j]=str[i]-32;
			}
		}
		temp[j]='\0';
		if(str[i]=='\0' && flag2==1) {
			printf("%s\n", temp);
		} else{
			printf("Error!\n");
		}
	}
	return 0;
}
