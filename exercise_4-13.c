#include <string.h>
#include <stdio.h>

#define MAXLINE	1000

void recursiveReverse(char s[], int i, int len);

void reverse(char s[])
{
	recursiveReverse(s, 0, strlen(s));
}

void recursiveReverse(char s[], int i, int len)
{
	int c, j;
	
	j = len - (i + 1);
	if(i < j)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
		recursiveReverse(s, ++i, len);
	}
}

/* getline: read a line into s, return length */
int getline(char s[], int lim)
{
  int c, i;

  for (i = 0; (i < lim-1) && ((c = getchar()) != EOF) && (c != '\n'); ++i)
    s[i] = c;
  s[i] = '\0';
  return i;
}


main()
{
  char s[MAXLINE];
  
  getline(s, MAXLINE);
  
  printf("before: %s\n", s);
  reverse(s);
  printf("after: %s\n", s);
}
