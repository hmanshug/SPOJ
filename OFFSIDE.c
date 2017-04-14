#include <stdio.h>
#define INF 100001

int main() {
	short A, D;
	scanf("%hd%hd", &A, &D);
	int i, Amin=INF, temp;
	int Dmin1=INF, Dmin2=INF;
	while(A!=0 && D!=0) {
		Amin=INF;
		Dmin2=INF;
		Dmin1=INF;
		for(i=0; i<A; i++) {
			scanf("%d", &temp);
			if(temp<Amin)
			Amin=temp;
		}
		for(i=0; i<D; i++) {
			scanf("%d", &temp);
			if(temp<Dmin1) {
				Dmin2=Dmin1;
				Dmin1=temp;	
			}
			else if(temp<Dmin2)
				Dmin2=temp;
		}
		if(Amin<Dmin2)
			printf("Y\n");
		else
			printf("N\n");
		scanf("%hd%hd", &A, &D);
	}
	
	return 0;
}
