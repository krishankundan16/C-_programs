#include<stdio.h>
int main()
{
	int n;

	printf("Enter the number :");
	scanf("%d",&n);
	if(n&n-1){
		printf("this number is non power of 2");
	}
	else{
		printf("this number is poer of 2");

	}
		//n&n-1?printf("this number is non power of 2"):printf("this number is power of 2");
	
	
	
	
}
