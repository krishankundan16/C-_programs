#include<stdio.h>
int main(){
	int a,b,c;
	printf("Enter the side of triangle a:\n b:\n c:\n");
	scanf("%d %d %d",&a ,&b ,&c);

	if((a == b) &&(b==c)&&(c==a))
	{
		printf("the triangle is eqilateral only");
	}
	else  if(a == b || a == c || b == c)
	{
		printf("the triangle is isosceles");
	}
	else
	{
		printf("the triangle is scalene");
	}
}

