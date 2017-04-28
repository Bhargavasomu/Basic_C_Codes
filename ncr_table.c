#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int a[1001][1001];
int ncr(int n,int r,int p)
{
	if(a[n][r]!=-1)
		return (a[n][r])%p;
	if((r==0)||(n==r))
	{
		a[n][r]=1;
		return 1;
	}
	if(n<r)
	{
		a[n][r]=0;
		return 0;
	}
	a[n][r]=(((ncr(n-1,r,p))%p)+((ncr(n-1,r-1,p))%p))%p;
	return a[n][r];
}
int main()
{
	int t,i,j,n;
	scanf("%d",&t);
	for(i=0;i<1001;i++)
		for(j=0;j<1001;j++)
			a[i][j]=-1;
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<=n;i++)
			printf("%d ",ncr(n,i,1000000000));
		printf("\n");
	}
	return 0;
}

