#include <stdio.h>

int main(){
	int c, newLines,blanks,tabs;

	newLines = 0;
	tabs = 0;
	blanks = 0;

	while ((c = getchar()) != EOF)
	{
		if(c == '\n')
		{
			++newLines;
			//printf("NL: %d",newLines);
		}
		else if(c == '\t')
		{
			++tabs;
			//printf("T: %d",tabs);
		}
		else if(c == ' ')
		{
			++blanks;
			//printf("B: %d",blanks);
		}
	}
	printf("NL: %d\tT: %d\tB: %d\n", newLines,tabs,blanks);
}
