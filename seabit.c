#include<stdio.h>
int main()
{
	int num;
	int bitpos;
	printf("enter tyhe num\n");
	scanf("%d",&num);
	printf("enter the bitpos");
	scanf("%d",&bitpos);
	printf("num :%d\n",num);
	num=num&(1<<bitpos);
	printf("num :%d\n",num);
}
