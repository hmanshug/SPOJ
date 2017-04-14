#include <stdio.h>
char str[501];
int count=0;
void countdecode(int ptr) {
	if(str[ptr]=='\0') {
		count++;
		return;	
	}
	if(str[ptr]=='0')
	return;
	
	countdecode(ptr+1);
	if((str[ptr+1]!='\0') && ((str[ptr]=='1') && str[ptr+1]!='0' || (str[ptr]=='2' && str[ptr+1]<='6'))) {
			countdecode(ptr+2);
	}
	else
	return;
	
	return;
}

int main() {
	while(1){
		scanf("%s", str);
		count=0;
		if(str[0]=='0')
			break;
		countdecode(0);
		printf("%d\n", count);
	}
	
}

