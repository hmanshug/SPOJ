
#include <stdio.h>
int min(int a, int b) {
	return a<b ? a: b;
}

int main()
{
	 int test=1, i, j;
	 while(1) {
		  int n;
		  scanf("%d", &n);
		  if(n==0)
		   return 0;
		  int a[n][3];
		  for(i=0; i<n; i++)
			for(j=0; j<3; j++)
				scanf("%d", &a[i][j]);
		   
		  if(n==1)
		   printf("%d. %d\n", test++, a[0][1]);
		
		  else {
		                                                               // Initialisation Step
			   a[1][0] += a[0][1];
			   a[0][2] += a[0][1];
			   a[1][1] += min(min(a[1][0],a[0][1]),a[0][2]);
			   a[1][2] += min(min(a[0][2],a[0][1]),a[1][1]);
		   
		
		                                                                 // Calculating the remaing nodes
		   for(i  = 2 ; i<n;i++)
		   {
			    a[i][0] += min(a[i-1][0],a[i-1][1]);
			    a[i][1] += min(min(min(a[i][0],a[i-1][0]),a[i-1][1]),a[i-1][2]);
			    a[i][2] += min(min(a[i][1],a[i-1][1]),a[i-1][2]);
		   }
		   printf("%d. %d\n", test++, a[n-1][1]);
		   
		  }
	 }
	return 0;
}

