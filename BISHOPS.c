#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void strre(char *num) {
	int i, length=strlen(num);
	char temp;
	
	for(i=0; i<=(length/2)-1; i++) {
		temp=num[i];
		num[i]=num[length-1-i];
		num[length-1-i]=temp;
	}
}
void minus(char *first, char *second) {
	int flen=strlen(first);
	int slen=strlen(second);
	int i, j, borrow=0, temp;
	
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
	while(borrow==-1) {
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
	//printf("%s\n", first);
}

void mul(char *sol) {
	int carry=0, temp, i;
	int solsize=strlen(sol);
	strre(sol);
	for(i=0; i<solsize; i++) {
			temp= (sol[i]-48)*2+carry;
			sol[i]=(temp%10)+48;
			carry=temp/10;
			
		}
		while(carry!=0) {
			sol[solsize]=(carry%10)+48;
			carry=carry/10;
			solsize++;
		}
		sol[solsize]='\0';
		strre(sol);
}


int main() {
	char num[101];
	while(scanf("%s", num)!=EOF) {
		if((num[0]=='1' || num[0]=='0' )&& num[1]=='\0')
		printf("%c\n", num[0]);
		else {
			minus(num, "1");
			mul(num);
			printf("%s\n", num);	
		}
	
	}
	
	return 0;
}
