#include<stdio.h>
int main()
{
	int i,j,t,p,ct=0,days_off=0,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%d",&p);
		int h[p];
		for(j=0;j<p;j++)
		{
			scanf("%d",&h[j]);
		}
		days_off=0;
		for(i=1;i<=n;i++)
		{
			ct=0;
			for(j=0;j<p;j++)
			{
				if(i%h[j]==0)
				{
					ct++;break;
				}
			}
			if(ct>0)
			days_off++;
			if(i%7==5)
			{
				i+=2;
			}
		}
		printf("%d\n",days_off);
	}
}
