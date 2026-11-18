#include<stdio.h>
int main()
{
	int num;
	int bitpos;
	printf("enter the number:\n");
	scanf("%d",&num);
	printf("enter the bitpos:\n");
	scanf("%d",&bitpos);
	num = num &~(1<<bitpos);
	printf("clear bit=%d\n",num);
	//toggle abit
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	
	n = n^(1<<bitpos);
	printf("togglebit=%d\n",n);

	//status of bit
	int t;
	 printf("enter the number:\n");
        scanf("%d",&t);

	t = ((t>>bitpos)&1);
	printf("statusofbit=%d\n",t);
}
