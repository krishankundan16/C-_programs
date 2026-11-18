#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	for(int i=0;i<5;i++)
	{
		printf("%d,",a[i]);
	}
	printf("\n");
	for(int i=4;i>=0;i--)
	{
		printf("%d,",a[i]);
	}
}

