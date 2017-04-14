#include <stdio.h>
#include <stdlib.h>

int main() {
	short nodes, edges;
	scanf("%hd%hd", &nodes, &edges);
	short i, node1, node2;
	char flag=0;
	
	short *arr;
	arr= (short *)calloc(nodes, sizeof(short));
	for(i=0; i<nodes; i++) {
		arr[i]=i;
	}
	
	for(i=0; i<edges; i++) {
		scanf("%hd%hd", &node1, &node2);
		if(arr[node1-1]!=arr[node2-1]) {
			arr[node1-1]=-1;
			arr[node2-1]=-1;
		}
		else
			flag=1;	
	}
	
	if(edges=nodes-1 && flag==0)
	printf("YES\n");
	else
	printf("NO\n");
	
	return 0;
}
