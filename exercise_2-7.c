#include <stdio.h>

#define MAX_NUM_BITS	32

unsigned invert(int num, int pos, int count);

int main(void)
{
	int num, pos, count, result;

	printf("input integer: ");
	scanf("%d", &num);

	printf("input starting bit position: ");
	scanf("%d", &pos);

	printf("input number of bits to invert: ");
	scanf("%d", &count);

	printf("\ninput: %08x\n", num);
	result = invert(num,pos,count);
	printf("output: %08x\n",result);
}


unsigned invert(int num, int pos, int count)
{
	int x;
	for(x = pos; x < 32 && x < pos + count; x++)
	{
		num ^= (1 << x);
	}

	return num;
	//??return (num >> (pos+1-count)) & ~(~0 << count);
}
