#include <stdio.h>
int cmpfn(const void *a, const void *b ) {
	return * (int*)a - * (int*)b;
}

int bisearch(int *arr, int l, int r, int key) {
	int mid=(l+r)/2 ,data;
	if(r<l)
	return 100000001;
	if(arr[mid]>key)
		data=arr[mid]-key;
	else
		data=key-arr[mid];
	
	if(key<arr[mid])
	return minimum(data, bisearch(arr, l, mid-1, key));
	else
	return minimum(data, bisearch(arr, mid+1, r, key));
}

int minimum(int a, int b) {
	if(a<b)
		return a;
	else
		return b;
}
int main() {
	int test, i, M[1001], N[1001];
	int A, B, MIN;
	scanf("%d", &test);
	
	while(test--) {
		MIN=100000001;
		scanf("%d", &A);
		for(i=0; i<A;i++)
			scanf("%d", &M[i]);
		scanf("%d", &B);
		for(i=0; i<B;i++)
			scanf("%d", &N[i]);
		qsort(N, B, sizeof(int), cmpfn);
		
		for(i=0; i<A; i++) {
			MIN= minimum(bisearch(N, 0, B-1, M[i]), MIN);
		}
		
		printf("%d\n", MIN);
	}
	return 0;
}

