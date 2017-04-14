#include <stdio.h>
int main() {
	char str[22];
	int s=1, t, i=0;
	for(t=0; t<10; t++, i=0,printf("%d\n", s), s=1) {
		scanf("%s", str);
		while(str[i]!='\0') {
			if(str[i]=='T' || str[i]=='D' || str[i]=='L' || str[i]=='F')
				s*=2;
			i++;
		}	
	
	}
return 0;
}
