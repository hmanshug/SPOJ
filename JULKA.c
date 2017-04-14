#include <stdio.h>
#include<string.h>

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

void divby2(char *num) {
	int len=strlen(num);
	int rem=0, i, temp;
	
	for(i=0; i<len; i++) {
		temp= ((int)num[i]-48 + rem*10)%2;
		num[i]= (((int)num[i]-48 + rem*10) / 2)+48;
		rem=temp;
	}
	//printf("%s\n", num);
}
char extra[102];

void add(char *first, char *sec) {
	int flen=strlen(first);
	int slen=strlen(sec);
	int len=slen, i, temp, carry=0;
	strre(first);
	strre(sec);
	if(flen>slen)
	len=flen;
	
		for(i=0; i<len; i++) {
			if(i<flen && i<slen)
				temp = (int)first[i]-48 + (int)sec[i]-48 + carry;
			else if(len==flen)
				temp = (int)first[i]-48 + carry;
			else if(len==slen)
				temp = (int)sec[i] -48 + carry;
				
			carry=temp/10;
			extra[i]= (temp % 10) + 48;
		
		}
		if(carry!=0) {
			extra[len]=49;
			len++;	
		}
		extra[len]='\0';
		//printf("%s\n", extra);
		
		while(len!=1) {
			if(extra[len-1]!='0')
			break;
			extra[len-1]='\0';
			len--;	
		}	
		while(slen!=1) {
			if(sec[slen-1]!='0')
			break;
			sec[slen-1]='\0';
			slen--;
		}
		
		strre(extra);
		strre(sec);
}

int main() {
	int i;
	char total[102], more[102];
	for(i=0; i<10; i++) {
		scanf("%s", total);
		scanf("%s", more);
		minus(total,more);
		divby2(total);
		add(more, total);
		printf("%s\n", extra);
		printf("%s\n", total);
	}
	return 0;
}
