#include <stdio.h>
#include <string.h>

char stack[401];
void push(char);
char pop();
int top=0;

int main() {
	int test;
	scanf("%d", &test);
	
	char str[401], temp;
	int length, i;
	while(test!=0) {
		
		scanf("%s", str);
		length=strlen(str);
		
		for (i=0; i<length; i++) {
				if(str[i]=='+' || str[i]=='-' || str[i]=='*' || str[i]=='/' || str[i]=='^' || str[i]=='(' )
					push(str[i]);
				else if(str[i] != ')')
					printf("%c", str[i]);
				else {
					while(1) {
						temp=pop();
						if(temp!='(')
							printf("%c", temp);
						else
							break;
					}
				}
				
		}
		printf("\n");
		test--;
	}
}

void push(char value) {   
   stack[top] = value;
   top++;
}

char pop() {
   top--;
   return stack[top];
}
