#include<stdio.h>
int main()
{
	int n;
	printf("Enter the value of n :");
	scanf("%d",&n);

	(n>0)?printf("%d is positive value\n",n):printf("%d is negative value",n);
}
