#include <stdio.h>

int main() {
	int N;
	scanf("%d" ,&N);
	int count[3]= {0,0,0};
	char str[4];
	int temp;
	
	while(N--!=0) {
		scanf("%s", str);
		if(str[0]=='3')
			count[2]++;
		else if(str[2]=='4')
			count[0]++;
		else
			count[1]++;
	}
	count[0]= count[0]- count[2];
	temp=count[1]%2;
	count[1]/=2;
	if(temp!=0) {
			count[1]++;
			count[0]-=2;	
	}
	
	if(count[0]<0)
	count[0]=0;
	temp=count[0]%4;
	count[0]/=4;
	if(temp!=0) {
		count[0]++;
	}
	printf("%d", count[0]+count[1]+count[2]+1);
	return 0;
}
