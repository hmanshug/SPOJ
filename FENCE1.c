#include <stdio.h>
#include <math.h>

int main() {
	int num;
	scanf("%d", &num);
	float ans;
	
	while(num!=0) {
		ans= ((float)num*num) / (2.0*3.14159);
		ans = ans*100.0;
	  	ans = (ans > (floor(ans)+0.5)) ? ceil(ans) : floor(ans);
	 	ans = ans/100.0;
	 	printf("%.2f\n", ans);
		scanf("%d", &num);
	}
	
	return 0;
}

