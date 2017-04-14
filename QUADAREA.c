#include <stdio.h>
#include <math.h>

int main() {
	int test;
	scanf("%d", &test);
	double a,b,c,d,s;
	
	while(test--!=0) {
		scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
		s=(a+b+c+d)/2;
		printf("%0.2lf\n", sqrt((s-a)*(s-b)*(s-c)*(s-d)));
	}
	return 0;
}
