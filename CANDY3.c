#include <stdio.h>
#include <limits.h>

int main() {
	
	int test;
	scanf("%d", &test);
	long long int sum, candy, students, i;
	
	while(test!=0) {
	scanf("%lld", &students);
	sum=0;
		for(i=0; i<students; i++) {
			scanf("%lld", &candy);
			sum=((sum%students)+(candy%students))%students;
		}
	if(sum==0)
	printf("YES\n");
	else
	printf("NO\n");
	
	--test;
	}
	
	return 0;
}
