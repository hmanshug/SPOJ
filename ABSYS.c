#include <stdio.h>
#include <math.h>
#include <string.h>

int main() {
	int test;
	scanf("%d", &test);
	char str[100];
	int flag, i, length, sum=0;
	int num1, num2, num3;
	int size, posplus, poseq;
	while(test!=0) {
		flag=0;
		sum=0;
		//scanf(" %[^\n]s", str);
		scanf(" %[^\n]s", str);
		
		length=strlen(str);
		//printf("%d\n", length);
		for(i=0; i<length; i++) {
			if(str[i]=='m')
			break;
			
			if(str[i]=='+') {
				flag=1;
			}
			
			if(str[i]=='=') {
				flag=2;
			}
			
		}
		for(i=0; i<length; i++) {
			if(str[i]=='+')
				posplus=i;
			
			if(str[i]=='=')
				poseq=i;
			
		}
		sum=0;
		size=0;
		if(flag==0 || flag==1) {
			size=length-1-poseq-1;
			for(i=poseq+2; i<length; i++) {
				sum=sum+ ((int)str[i]-48)*pow(10, --size);
			}
			num3=sum;
		}
		sum=0;
		size=0;
		if(flag==0 || flag==2) {
			size=poseq-posplus-3;
			for(i=posplus+2; i<poseq-1; i++) {
				sum=sum+ ((int)str[i]-48)*pow(10, --size);
			}
			num2=sum;
		}
		sum=0;
		size=0;
		if(flag==1 || flag==2) {
			size=posplus-1;
			for(i=0; i<posplus-1; i++) {
				sum=sum+ ((int)str[i]-48)*pow(10, --size);
			}
			num1=sum;
		}
		
		if(flag==0)
		printf("%d + %d = %d\n", num3-num2, num2, num3);
		if(flag==1)
		printf("%d + %d = %d\n", num1, num3-num1, num3);
		if(flag==2)
		printf("%d + %d = %d\n", num1, num2, num1+num2);
		
		
		
		//scanf("%s", str);
		test--;
	}
	
	return 0;
}
