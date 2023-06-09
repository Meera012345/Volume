#include<stdio.h>
struct student
{
	char name[100];
	int roll_no;
	int phymark;
	int chemmark;
	int mathmark;
};
main()
{
	int i,sum;
	float percentage;
	struct student marks[100];
	for(i=0;i<5;i++)
	{
		printf("Enter student's Name:-");
		scanf("%s",&marks[i].name);
		printf("Enter student's Rollno:-");
		scanf("%d",&marks[i].roll_no);
		printf("Enter student's Physics marks:-");
		scanf("%d",&marks[i].phymark);
		printf("Enter student's chemistry marks:-");
		scanf("%d",&marks[i].chemmark);
		printf("Enter student's maths marks:-");
		scanf("%d",&marks[i].mathmark);
	}
	printf("\n\n_____*************************______\n\n");
	for(i=0;i<5;i++)
	{
		printf("Student's name is=%s\n",marks[i].name);
		printf("Student's roll no is=%d\n",marks[i].roll_no);
		printf("Student's physics marks is=%d\n",marks[i].phymark);
		printf("Student's chemistry marks is=%d\n",marks[i].chemmark);
		printf("Student's Maths marks is=%d\n",marks[i].mathmark);
		sum=marks[i].phymark+marks[i].chemmark+marks[i].mathmark;
		percentage=sum/300.00*100;
		printf("Your student's percentage:-%f\n\n",percentage);
	}
}
