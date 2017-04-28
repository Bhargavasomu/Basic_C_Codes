#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
void find(int x,int y,int a[])
{
	if(a[x]%2)
	{
		printf("Odd\n");
		return;
	}
	else
	{
		if(x==y)
		{
			printf("Even\n");
			return;
		}
		else if(a[x+1]==0)
		{
			printf("Odd\n");
			return;
		}
		else
		{
			printf("Even\n");
			return;
		}
	}
}
int main()
{
	int n,i,a[1000000],t,x,y,ans;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&x,&y);
		find(x,y,a);
	}
	return 0;
}
