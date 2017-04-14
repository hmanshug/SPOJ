#include <stdio.h>
#include <math.h>
int main() {
	int test;
	double a, b, c, C, B, A;
	double P, Q, R, VOL;
	scanf("%d", &test);
	
	while(test--) {
		scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &C, &B, &A);
		P= b*b + c*c - A*A;
		Q= a*a + c*c - B*B;
		R= a*a + b*b - C*C;
		VOL=(1/12.0)* sqrt(4*a*a*b*b*c*c- a*a*P*P- b*b*Q*Q - c*c*R*R + P*Q*R);
		printf("%0.4lf\n", VOL);
	}
	return 0;
}
