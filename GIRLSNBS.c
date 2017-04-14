#include <stdio.h>
#include <math.h>

int main() {
	short B, G;
	scanf("%hd%hd", &B, &G);
	
	while(B!=-1 && G!=-1) {
		if(B<G) {
			B=B+G;
			G=B-G;
			B=B-G;
		}
		printf("%hd\n", (int)(ceil((float)B/++G)));
		scanf("%hd%hd", &B, &G);
	}
	return 0;
}
