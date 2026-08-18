#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a and b:");
	scanf("%d %d",&a ,&b);
	(a==b)?printf("both are equal"):(a>b)?printf("%d is greater",a):printf("%d is greater ",b);
	

}
