#include <stdio.h>

int main() {
	char str[2001];
	int i, count, test=1, counter;
	
	while(1) {
		scanf("%s", str);
		count=0;
		counter=0;
		//counter for count '{' and count for result
		if(str[0]=='-')
			break;
		for(i=0; str[i]!='\0'; i++) {
			if(str[i]=='{')
				counter++;
			else {
				if(counter==0) {
					count++;
					counter++;
				} else {
					counter--;
				}
			}
		}
		if(counter!=0) 
		counter/=2;
		printf("%d. %d\n", test++, count+counter);
	}
	return 0;
}
