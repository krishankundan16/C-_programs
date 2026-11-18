#include<stdio.h>
int main()
{
	int ch;
	printf("enter the number:\n");
	scanf("%d",&ch);
	int bitpos;
	for(bitpos=7;bitpos>=0;bitpos--)
	{
	if(ch&(1<<bitpos))
	{
	  printf("1");
	}
	else
		printf("0");
	}
}
