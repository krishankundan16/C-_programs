#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the ch :");
	scanf("%c",&ch);
	if(ch=ch+32)
	{
		printf("%c is lowercase",ch);
	}
	else{
		printf("it is not lowercase");
	}
}
