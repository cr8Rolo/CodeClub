#include <stdio.h>

int main(){
	int c;
	int blankCount = 0;
	while((c = getchar()) != EOF)
	{
		if(blankCount >= 1 && c == ' '){
			blankCount++;
		}
		else if(blankCount < 1 && c == ' ')
		{
			blankCount++;
			putchar(c);
		}
		else
		{
			blankCount = 0;
			putchar(c);
		}
	}
}
