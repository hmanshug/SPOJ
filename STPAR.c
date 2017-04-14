#include <stdio.h>

int stack[1001];
void push();
int pop();
int is_empty();
int top_element();
int top = 0;

void push(int value) {   
   stack[top] = value;
   top++;
}
 
int pop() {
   top--;
   return stack[top];
}    
 
int is_empty() {
   if (top == 0)
      return 1;
   else
      return 0;
}
 
int top_element() {
	if(top==0)
	return -1;
   return stack[top-1];
}

int main() {
	int num, ocount;
	scanf("%d", &num);
	int temp, i;
	
	while(num!=0) {
		ocount=1;
		top=0;
		for(i=0; i<num;) {
			if(top_element() != ocount) {
				scanf("%d", &temp);
				i++;
				if(temp==ocount)
				ocount++;
				else
				push(temp);
			}
			else {
				pop();
				ocount++;
			}	
		}
		while(ocount!=num+1) {
			if(ocount!=top_element())
			break;
			else {
				pop();
				ocount++;
			}
		}
		if(is_empty())
			printf("yes\n");
		else
			printf("no\n");
		
		
		scanf("%d", &num);
	}
}
