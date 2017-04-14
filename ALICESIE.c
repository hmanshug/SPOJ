#include <stdio.h>


int main() {
	int test, temp, i;
	scanf("%d", &test);
	// like 10....we check alwaya before 5 (10/2) because 6*2=12

	while(test--) {
		scanf("%d", &temp);
	
		if(temp%2==0)
			printf("%d\n", (temp/2));
		else	
			printf("%d\n", (temp/2)+1);
	}
	return 0;
}
