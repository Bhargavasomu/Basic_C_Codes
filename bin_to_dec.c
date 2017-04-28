#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[1000000];
	long long int dig,l,sum,mult,i;
	scanf("%s",a);
	l=strlen(a);
	sum=0;
	mult=1;
	for(i=l-1;i>=0;i--)
	{
		dig=a[i]-'0';
		sum+=mult*dig;
		mult=mult*2;
	}
	printf("%lld\n",sum);
	return 0;
}

