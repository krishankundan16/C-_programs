#include<stdio.h>
int reverse_bit(int n)
{
	unsigned int rev=0;
	for(int i=0;i<8;i++)
	{
		rev=(rev<<1) | (n&1);
		n>>=1;
	}
	return rev;
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
	int n,p,q;
	printf("enter the number: ");
	scanf("%d",&n);
	binary(n);
	int c=reverse_bit(n);
	printf("After Swapping :%d\n",c);
	binary(c);

}
