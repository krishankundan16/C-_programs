#include<stdio.h>
int binary_to_integer(int n)
{
	 int decimal=0;
	 int base=1;
	while(n)
	{
		decimal += (n%10)*base;
		base *=2;
		n= n/10;
	}
	
	return decimal;
}


int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d", &n);
	int c=binary_to_integer(n);
	printf("integer :%d\n",c);

}
