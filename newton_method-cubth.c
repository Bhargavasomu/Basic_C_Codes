#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	float a,x,temp;
	scanf("%f",&a);
	x=1;
	while(fabs(x*x*x-a)>=0.0001)
	{
		temp=a/(3*x*x);
		x=(temp)+((x*2)/3);
	}
	printf("%f\n",x);
	return 0;
}

