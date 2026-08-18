#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the number a,b and c :");
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	c=a&b;
	printf("c= %d\n",c);
	c=a|b;
	printf("c= %d\n",c);
	c=a^b;
	printf("c= %d\n",c);
	c=~a;
	printf("c= %d\n",c);
	int k;
	printf("k is bit position value");
	scanf("%d",&k);
	a=a&(1>>k);
	printf("a= %d",a);
}

