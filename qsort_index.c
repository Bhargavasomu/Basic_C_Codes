#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int a[100005],b[100005];
int cmp(const void *ac, const void *bc)
{
	return ( a[*(int*)ac] - a[*(int*)bc] );
}
int min(int a,int b)
{
	if(a<=b)
		return a;
	else
		return b;
}
int max(int a,int b)
{
	if(a>=b)
		return a;
	else
		return b;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		b[i]=i;
	qsort(b,n,sizeof(int),cmp);

	// Finally this b[i] array contains the indices in the original array 
	// which are finally in the sorted order.
	
	for(i=0;i<n;i++)
		printf("%d ",a[b[i]]);
	printf("\n");
	return 0;
}
