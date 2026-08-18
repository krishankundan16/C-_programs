#include<stdio.h>
int main()
{
	float marksinmaths,marksinphy,marksinchem,Totalmarks_inallthreesubject,totalin_mathsandphy;
	printf("Enter the marks in maths:");
	scanf("%f",&marksinmaths);
	printf("Enter the marks in phy:");
	scanf("%f",&marksinphy);
	printf("Enter the marks in chem:");
	scanf("%f",&marksinchem);


 
	Totalmarks_inallthreesubject = marksinmaths + marksinphy + marksinchem;
        printf("Total marks in three subjects =%.2f\n",Totalmarks_inallthreesubject);

	 totalin_mathsandphy = marksinmaths + marksinphy;
        printf("Total marks in maths amd phy =%.2f\n",totalin_mathsandphy); 
		
	 if((Totalmarks_inallthreesubject >= 190) && (totalin_mathsandphy >=140))
	{
		printf("the candidate is eligible for admission\n");
	}
	else{
		printf("the candidate is not eligible for admission\n");
	}

}
