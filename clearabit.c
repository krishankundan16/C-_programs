#include<stdio.h>
int main()
{
	int ch;
	printf("enter the number:\n");
	scanf("%d",&ch);
	int bitpos;
	printf("enter the bitpos:\n");
	scanf("%d",&bitpos);
	ch=ch&~(1<<bitpos);
	printf("ch=%d\n",ch);
}
