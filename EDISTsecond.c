#include <stdio.h>
#include <string.h>
int cache[2010][2010];
int LevenshteinDistance(char *s, char *t) {
	int i, j;
	int len1=strlen(s);
	int len2=strlen(t);
	
	
	for(i=0; i<(len1+1); i++)
		for(j=0;j<(len2+1);j++) {
			if(i==0)
				cache[i][j]=j;
			else if(j==0)
				cache[i][j]=i;
			else
				cache[i][j]=0;
		}	
				
	for(i=1; i<len1+1; i++)
		for(j=1; j<len2+1;j++) {
			if(s[i-1]==t[j-1])
				cache[i][j]=cache[i-1][j-1];
			else {
				cache[i][j]=minimum(cache[i-1][j] + 1, cache[i][j-1] + 1, cache[i-1][j-1] + 1);
			}
		}
	
	return cache[len1][len2];
}
int minimum(int a, int b, int c) {
	if(a<=b && a<=c)
	return a;
	else if(b<=a && b<=c)
	return b;
	else
	return c;
}

int main() {
	int test;
	scanf("%d", &test);
	char str1[2010], str2[2010];
	
	while(test--) {
		scanf("%s%s", str1, str2);

		printf("%d\n", LevenshteinDistance(str1, str2));
	}
	return 0;
}
