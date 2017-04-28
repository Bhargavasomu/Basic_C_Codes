#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int quickpow(int a,int b)
{
	if(b==0)
		return 1;
	if(b==1)
		return a;
	int halfpow=quickpow(a,b/2);
	if(b%2==0)
		return halfpow*halfpow;
	else
		return halfpow*halfpow*a;
}
int main()
{
	int k,t,a,b,x,ans,power,t1,t2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&a,&b,&x);
		if(b<0)
		{
			if((a==1)&&(x==1))
				ans=1;
			else
				ans=0;
		}
		else
		{
			power=(quickpow(a,b));
			k=power/x;
			t1=k*x;
			t2=(k+1)*x;
			if((power-t1)<=(t2-power))
				ans=t1;
			else
				ans=t2;
		}
		printf("%d\n",ans);
	}
	return 0;
}
