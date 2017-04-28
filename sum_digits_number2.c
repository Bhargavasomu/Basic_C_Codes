#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>			//By recursion
int sum(int n)
{
	int digit;
	if(n==0)
		return 0;
	return (n%10)+sum(n/10);
}
int main()
{
	int n,temp;
	scanf("%d",&n);
	temp=sum(n);
	printf("%d\n",temp);
	return 0;
}

