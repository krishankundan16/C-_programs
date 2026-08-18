#include<stdio.h>
int main()
{
	char ch;
	printf("enter the value:");
	scanf("%c",&ch);
	(ch>=65) && (ch<=90)?printf("%c is uppercase alphabet",ch):printf("%c is lowercase alphabet",ch);
	

}
