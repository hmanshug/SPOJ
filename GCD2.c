#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
void strre(char *num) {
	int i, length=strlen(num);
	char temp;
	
	for(i=0; i<=(length/2)-1; i++) {
		temp=num[i];
		num[i]=num[length-1-i];
		num[length-1-i]=temp;
	}
}
int minus(char *first, char *second) {
	int flen=strlen(first);
	int slen=strlen(second);
	int i, j, borrow=0, temp;
	char *tempf;
	//storing for futute
	tempf=(char *)malloc(sizeof(char)*flen);
	for(i=0; i<flen;i++)
		tempf[i]=first[i];
	//......
	for(i=slen-1, j=flen-1; i>=0; i--, j--) {
		temp= (int)first[j]-48 - ((int)second[i]-borrow-48);
		if(temp<0) {
			first[j]=temp + 10+48;
			borrow=-1;
		} else {
			first[j]=temp+48;
			borrow=0;
		}
	}
	i=1;
	while(flen-slen-i >=0 && borrow==-1) {
		temp= (int)first[flen-slen-i]-48 - 1;
		
		if(temp<0) {
			first[flen-slen-i]= temp + 10+48;
			borrow=-1;
			i++;
		} else {
			first[flen-slen-i]=temp+48;
			borrow=0;
		}
	}
	// CODE TO REMOVE ZEROES...
	if(borrow==-1) {
		for(i=0; i<flen;i++)
		first[i]=tempf[i];
	} else {
		i=flen-1;
		strre(first);
		while(first[i]=='0' && i>0) {
		first[i]='\0';
		i--;
		}
		strre(first);
	}
	free(tempf);	
	//printf("%s\n", first);
	return borrow;
}
void findgcd(char *first, char *second) {
	int flen=strlen(first);
	int slen=strlen(second);
	int j, temp1;
	
		for(j=slen; j<flen-1; j++)
			second[j]='0';
		second[j]='\0';
	
		while(1) {
			if(flen<=slen)
				break;
			temp1=minus(first, second);
			
			if(temp1==-1) {
				flen=strlen(first);
				second[flen]='\0';
			}
			
		}
		//printf("%s\n", first);
		//printf("%s\n", second);
	
}
int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main() {
/*
	char first[100]="1845";
	char second[100]="16";
	*/
	int test;
	char first[100], second[300];
	
	scanf("%d", &test);
	while(test--!=0) {
		scanf("%s%s", second, first);
		int slen=strlen(second);
		findgcd(first, second);
		int flen=strlen(first);
		int sum1=0, sum2=0, i, j;
			for(i=0, j=flen-1; i<flen; i++, j--) {
				sum1=sum1+ ((int)first[i]-48)*pow(10,j);
			}
			for(i=0, j=slen-1; i<slen; i++, j--) {
				sum2=sum2+ ((int)second[i]-48)*pow(10,j);
			}
			printf("%d\n",gcd(sum1, sum2));
}
}

