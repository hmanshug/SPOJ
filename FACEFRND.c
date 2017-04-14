#include <stdio.h>

int main() {
	int nof, id, noff, count=0, i, temp;
	scanf("%d", &nof);
	char map[9999]= {' '};
	while(nof--) {
		scanf("%d%d", &id, &noff);
		if(map[id]=='1') 
		count--;
		map[id]='-';
		
		for(i=0; i<noff; i++) {
			scanf("%d", &temp);
			if(map[temp]!='-' && map[temp]!='1') {
				count++;
				map[temp]='1';
			}
		}
	}
	printf("%d", count);
	return 0;
}
