#include <stdio.h>
#include <stdlib.h>

#define swap(t, x, y) {t temp; temp=(x); (x)=(y); (y)=temp;}

int main()
{
	char c1 ='a';
	char c2 = 'b';
	
	printf("before: x=%c y=%c\n",c1,c2);  
	swap(char,c1,c2);
	printf("after: x=%c y=%c\n",c1,c2);

	int i1 = 42;
	int i2 = 13;
	
	printf("before: x=%d y=%d\n",i1,i2);  
	swap(int,i1,i2);
	printf("after: x=%d y=%d\n",i1,i2);
	
	float f1 = 3.141;
	float f2 = 6.022;
	
	printf("before: x=%.3f y=%.3f\n",f1,f2);  
	swap(float,f1,f2);
	printf("after: x=%.3f y=%.3f\n",f1,f2);
	
	return 0;
}
