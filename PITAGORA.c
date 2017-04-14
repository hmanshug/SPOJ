#include <stdio.h>
#include <math.h>

int main() {
	long long test, n, i;
	double temp;
	
	while(1) {
		test=scanf("%lld", &n);
		if(test==-1)
			break;
	
		
		i=n+1;
       	while(1) {
       		temp= sqrt(i*i + n*n);
       		if((long long)ceil(temp)- temp==0) {
       			printf("%lld %lld %lld\n", n, i, (long long) temp);
       			break;
       		}
       		i++;
       	}
        
	}
	return 0;
}
