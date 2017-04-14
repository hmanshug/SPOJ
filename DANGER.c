#include <stdio.h>
#include <math.h>

int main() {
	
	char str[5];
	int num, temp, i;
	
	while(1) {
		scanf("%s", str);
		if(str[0]=='0' && str[1]=='0')
			break;
		
		num= (str[0]-48)*pow(10, str[3]-48+1);
		num= num+ (str[1]-48)*pow(10, str[3]-48);
		
		for(i=0; pow(2, i)<=num; i++);
		temp=pow(2, i-1);
		printf("%d\n", (num-temp)*2 + 1);
		
	}
	return 0;
}
