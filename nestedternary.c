#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	(n>0)?printf("it is positive value"): (n<0)?printf("it is negative value"):printf("it is alphabet");

}
