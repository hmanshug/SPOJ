#include <stdio.h>
int gcd(int a, int b) {
	if (b==0)
		return a;
	
	return gcd(b, a%b);
}
int main() {
	int test, A, B, temp;
	scanf("%d", &test);
	
	while(test--) {
		scanf("%d%d", &A, &B);
		temp= gcd(A, B);
		printf("%d %d\n", B/temp, A/temp);
		
	}
	
	return 0;
}
