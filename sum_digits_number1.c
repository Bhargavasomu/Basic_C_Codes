#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()				//By loop 
{
	int n,sum,digit;
	scanf("%d",&n);
	sum=0;
	while(n!=0)
	{
		digit=n%10;
		sum+=digit;
		n=n/10;
	}
	printf("%d\n",sum);
	return 0;
}

