#include <stdio.h>

int main() {
	
	int test, NG, NM;
	scanf("%d", &test);
	int temp,MaxG, MaxM, i; 
	
	while(test!=0) {
		MaxG=0;
		MaxM=0;
		scanf("%d%d", &NG, &NM);
		for(i=0; i<NG;i++) {
			scanf("%d", &temp);
			if(temp>MaxG)
			MaxG=temp;
		}
		for(i=0; i<NM;i++) {
			scanf("%d", &temp);
			if(temp>MaxM)
			MaxM=temp;
		}
		if(MaxG>=MaxM)
		printf("Godzilla\n");
		else if(MaxG<MaxM)
		printf("MechaGodzilla\n");
		
	
		test--;
	}	
	return 0;
}
