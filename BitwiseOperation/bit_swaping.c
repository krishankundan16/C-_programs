#include<stdio.h>
int swap_bit(int n,int p,int q)
{
	int b1=(n>>p)&1;
	int b2=(n>>q)&1;
	if(b1 != b2)
	{
		n^=(1<<p);
		n^=(1<<q);
	}
	return n;
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
	printf("Enter the bit pos: ");
	scanf("%d %d",&p,&q);
	int c=swap_bit(n,p,q);
	printf("After Swapping :%d\n",c);
	binary(c);

}
