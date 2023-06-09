#include <stdio.h>

struct Distance
{
    int feet;
    int inch;
} firstDistance, secondDistance, sum;

 main()
{
    printf("Enter the first feet:-");
    scanf("%d",&firstDistance.feet);
    printf("Enter the second feet:-");
    scanf("%d",&secondDistance.feet);
    sum.feet=firstDistance.feet+secondDistance.feet;
    
    printf("Enter the first inch:-");
    scanf("%d",&firstDistance.inch);
    printf("Enter the second inch:-");
    scanf("%d",&secondDistance.inch);
    sum.inch=firstDistance.inch+secondDistance.inch;
    
    while(sum.inch>=12)
    {
    	sum.feet++;
    	sum.inch=sum.inch-12;
	}
	
	printf("The sum of feet is = %d\n",sum.feet);
	printf("The sum of inch is = %d\n",sum.inch);
}
