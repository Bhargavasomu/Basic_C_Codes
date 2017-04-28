#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
typedef struct n{
	int val;
	struct n *next;
}node;
node *a[1000000];
int visit[1000000];
int weight[1000000];
void insert(int v1,int v2)
{
	node *temp=(node *)malloc(sizeof(node));
	temp->val=v2;
	temp->next=NULL;
	if(a[v1]==NULL)
		a[v1]=temp;
	else
	{
		node *var=a[v1];
		while(var->next!=NULL)
			var=var->next;
		var->next=temp;
	}
}
int dfs(int v)
{
	visit[v]=1;
	node *temp=a[v];
	if(temp==NULL)
		return weight[v];
	else
	{
		int sum;
		int max=-1;
		while(temp!=NULL)
		{
			sum=weight[v];
			if(!visit[temp->val])
				sum+=dfs(temp->val);
			if(max<sum)
				max=sum;
			temp=temp->next;
		}
		return max;
	}
}
int main()
{
	int n,m,i,v1,v2;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
		scanf("%d",&weight[i]);
	for(i=0;i<m;i++)
	{
		scanf("%d %d",&v1,&v2);
		insert(v1,v2);
		insert(v2,v1);
	}
	printf("%d\n",dfs(1));
	return 0;
}
