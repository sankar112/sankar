
#include <stdio.h>
 
void main()
{
	int i,b,p,power=1;
	printf("enter the num");
	scanf("%d",&b);
	scanf("%d",&p);
	for(i=0;i<p;i++)
	{
		power=power*b;
	}
	printf("%d",power);
	return 0;
}
