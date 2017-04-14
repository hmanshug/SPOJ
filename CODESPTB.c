#include <stdio.h>
#include <stdlib.h>
long long count=0;

void merge(int arr[],int min,int mid,int max)
{
  int *tmp;
  tmp= (int *)malloc((max+1)*sizeof(int));
  int i,j,k,m; 
  j=min;
  m=mid+1;
  for(i=min; j<=mid && m<=max ; i++)
  {
     if(arr[j]>arr[m])
     {
         tmp[i]=arr[j];
         j++;
         count= count+ (max-m+1);
     }
     else
     {
         tmp[i]=arr[m];
         m++;
         
     }
  }
  if(j>mid)
  {
     for(k=m; k<=max; k++)
     {
         tmp[i]=arr[k];
         i++;
     }
  }
  else
  {
     for(k=j; k<=mid; k++)
     {
        tmp[i]=arr[k];
        i++;
     }
  }
  for(k=min; k<=max; k++)
     arr[k]=tmp[k];
free(tmp);
}
void part(int arr[],int min,int max)
{
 int mid;
 if(min<max)
 {
   mid=(min+max)/2;
   part(arr,min,mid);
   part(arr,mid+1,max);
   merge(arr,min,mid,max);
 }
}


int main() {
	int test;
	scanf("%d", &test);
	int noe, i, j;
	int *arr;
	
	
	while(test--!=0) {
		count=0;
		scanf("%d", &noe);
		arr= (int *)malloc(noe*sizeof(int));
		for(i=0; i<noe; i++) {
			scanf("%d", &arr[i]);
		}
		part(arr, 0, noe-1);
		printf("%lld\n", count);
		/*
		int k;
		for(k=0; k<noe; k++)
    		printf("%d ", arr[k]);
    	*/
    		
		free(arr);
	}
	
	return 0;
}

