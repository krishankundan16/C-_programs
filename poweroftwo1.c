#include<stdio.h>
int main()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	if(n&n-1)
		printf("%d is not power of two\n",n);
	else
		printf("%d is power of two\n",n);
}
