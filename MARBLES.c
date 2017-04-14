#include <stdio.h>
// COPIED SOLUTION....
/*
long long fac(long long n) {
	if(n==1 || n==0)
	return 1;
	else
	return n*fac(n-1);
}
*/
 long long ncr (long long n, long long r) {
         long long int res = 1,i;
         if(r > n/2)
         r = n-r;
         for(i = 0; i < r; i++) {
	         res *=  n;
	         res /= i+1;
	         n--;
          }
          return res;
  }



int main() {
	int test;
	scanf("%d", &test);
	long long n, r;
	
	while(test--!=0) {
		scanf("%lld%lld", &n, &r);
		printf("%lld\n", ncr(n-1, r-1));
	}
	return 0;
}

