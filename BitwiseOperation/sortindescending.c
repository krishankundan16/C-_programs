#include<stdio.h>
int sort_inascending(int n)
{
	 int cnt=0;
	while(n)
	{
		cnt += n&1;
		n>>=1;
	}
	unsigned int res=0;
	for(int i=7;i>=8-cnt;i--)
	{
		res |=(1<<i);
		
	}
	return res;
}

int binary(int n)
{
	for(int bitpos=7;bitpos>=0;bitpos--)
	{
		if(n&(1<<bitpos))
			printf("1");
		else
		         printf("0");
	}
	printf("\n");
}
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	binary(n);
	int c=sort_inascending(n);
	printf("After Swapping :%d\n",c);
	binary(c);

}
