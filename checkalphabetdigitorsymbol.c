#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the value of ch:");
	scanf("%c",&ch);

	if((ch>='A' && ch<='Z') || (ch>='A' && ch<='z'))
	{
		printf("%c is alphabet\n",ch);
	}
	else if(ch>='0' && ch<='9')
	{
		printf("%c is digits",ch);
	}
	else
	{
		printf(" %c is symbols",ch);
	}

}
