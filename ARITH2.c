#include <stdio.h>

int add(int temp, int ptr, char*) {
	
}
int findnum(int *n, char *str) {
	int i, length=0, temp, ptr=*n;
	for(i=ptr; str[i]!=' '; i++);
	length=i-ptr-1;
	for(i=ptr; str[i]!=' '; i++) {
		temp= temp+ (str[i]-48)*pow(10, length);
		length--;
	}
	n=
	return temp;
} 
int main() {
	int test;
	scanf("%d", &test);
	
	while(test!=0) {
		scanf("%s", str);
		scanf("%s", str);
		
		for(i=0; str[i]!=' '; i++);
		length=i-1;
		for(i=0; str[i]!=' '; i++) {
			temp= temp+ (str[i]-48)*pow(10, length);
			length--;
		}
		i=length+2;
		while(str[i]!='=') {
			if(str[i]=='+' ) {
				i= add(temp, i, str);
			}
			if(str[i]=='-' ) {
				i= minus(temp, i, str);
			}
			if(str[i]=='*' ) {
				i= mul(temp, i, str);
			}
			if(str[i]=='/' ) {
				i= divide(temp, i, str);
			}
		}
		
		test--;
	}
}

str[i]>=48 && str[i]<=57
