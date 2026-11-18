#include<stdio.h>
int main()
{
	int ch;
	printf("enter the number:\n");
	scanf("%d",&ch);
	int bitpos;
	printf("enter the bitpos:\n");
	scanf("%d",&bitpos);
	if(ch&(1<<bitpos))
	{
	  printf("Bit is Set (1)\n");
	}
	else
		printf("Bit is Clear (0)\n");
}
