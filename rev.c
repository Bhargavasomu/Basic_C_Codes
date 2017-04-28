#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int area,n,m;
int a[1005][1005];
void blast(int x,int y)
{
	a[x][y]=0;
	area--;
	if(((x-1)>0)&&(a[x-1][y]))
		blast(x-1,y);
	if(((x+1)<=n)&&(a[x+1][y]))
		blast(x+1,y);
	if(((y-1)>0)&&(a[x][y-1]))
		blast(x,y-1);
	if(((y+1)<=m)&&(a[x][y+1]))
		blast(x,y+1);
}
int main()
{
	int q,i,j,x,y;
	scanf("%d %d %d",&n,&m,&q);
	area=0;
	for(i=0;i<1005;i++)
		for(j=0;j<1005;j++)
			a[i][j]=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&a[i][j]);
			if(a[i][j]==1)
				area++;
		}
	}
	while(q--)
	{
		scanf("%d %d",&x,&y);
		if(a[x][y]==1)
			blast(x,y);
		printf("%d\n",area);
	}
	return 0;
}
