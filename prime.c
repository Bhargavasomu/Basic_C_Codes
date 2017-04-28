#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()					//Gives all prime numbers from 1 to n
{
	int n,i,j,a;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		a=0;
		for(j=2;j<=(i/2);j++)
		{
			if((i%j)==0)
				a=1;
		}
		if(a==0)
			printf("%d\n",i%4);
	}
	return 0;
}

