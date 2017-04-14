#include <stdio.h>
#include <string.h>

int LevenshteinDistance(char *s, int len_s, char *t, int len_t)
{ int cost;

  /* base case: empty strings */
  if (len_s == 0) return len_t;
  if (len_t == 0) return len_s;

  /* test if last characters of the strings match */
  if (s[len_s-1] == t[len_t-1])
      cost = 0;
  else
      cost = 1;

  /* return minimum of delete char from s, delete char from t, and delete char from both */
  return minimum(LevenshteinDistance(s, len_s - 1, t, len_t    ) + 1,
                 LevenshteinDistance(s, len_s    , t, len_t - 1) + 1,
                 LevenshteinDistance(s, len_s - 1, t, len_t - 1) + cost);
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
	char str1[2001], str2[2001];
	
	while(test--) {
		scanf("%s%s", str1, str2);
		int len1=strlen(str1);
		int len2=strlen(str2);
		printf("%d\n", LevenshteinDistance(str1, len1, str2, len2));
	}
	return 0;
}
