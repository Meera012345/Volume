#include<stdio.h>
enum week
{
	Sunday,Monday,Tuesday,Wednesday,Thrusday,Friday,Saturday
};
main()
{
	enum week a,b,c,d,e,f,g;
	a=Sunday;
	b=Monday;
	c=Tuesday;
	d=Wednesday;
	e=Thrusday;
	f=Friday;
	g=Saturday;
	printf("Integer value of Sunday=%d\n",a);
	printf("Integer value of Monday=%d\n",b);
	printf("Integer value of Tuesday=%d\n",c);
	printf("Integer value of Wednesday=%d\n",d);
	printf("Integer value of Thrusday=%d\n",e);
	printf("Integer value of Friday=%d\n",f);
	printf("Integer value of Saturday=%d\n",g);
}
