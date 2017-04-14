#include <stdio.h>
#include <string.h>

void make_palin(char*);
int check_palin(char*);
void strre(char*);
//short int sol[1000000]; 
//int solsize;

int main() {
	int test;
	scanf("%d", &test);
	char num[1000001];
	
	while(test!=0) {
		scanf("%s", num);
		if(check_palin(num)) {
			make_palin(num);
		}
		
		printf("%s\n", num);
		
		test--;
	}
	return 0;
}

void make_palin(char *num) {
	int solsize= strlen(num);
	int i, j, carry=0, temp;
	
	int mid=solsize/2;
	if(solsize%2!=0) {
		temp= num[mid]-48+1;
		carry=temp/10;
		num[mid]= (temp%10) + 48;
			i=mid+1;
			while(carry!=0 && i<solsize)	 {
				temp= num[i]-48+carry;
				carry=temp/10;
				num[i]= (temp%10) + 48;
				num[solsize-i-1]= (temp%10) + 48;
				
				i++;
			}
			if(i==solsize && carry!=0) {
					num[0]=49;
					num[solsize++]=49;
					num[solsize]='\0';
				}
	}
	else {
		temp= num[mid]-48+1;
		carry= temp/10;
		num[mid]= (temp%10) + 48;
		num[solsize-mid-1]= (temp%10) + 48;
			i=mid+1;
			while(carry!=0 && i<solsize)	 {
				temp= num[i]-48+carry;
				carry=temp/10;
				num[i]= (temp%10) + 48;
				num[solsize-i-1]= (temp%10) + 48;
				i++;
			}
				if(i==solsize && carry!=0) {
					num[0]=49;
					num[solsize++]=49;
					num[solsize]='\0';
				}
	}

}

int check_palin(char* num) {
	int length=strlen(num), i, j;
	char flag=0;
	
	for(i=length/2; i>0; i--) {
		if(num[i-1]<num[length-i] && flag==0) {
			num[length-i]=num[i-1];
			flag=1;
		} else if(num[i-1]>num[length-i] && flag==0){
			num[length-i]=num[i-1];
			flag=2;
		}
		num[length-i]=num[i-1];	
	}
		if(flag==1 || flag==0)
		return 1;
		else 
		return 0;
}
