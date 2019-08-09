#include<stdio.h>
int main()
{
	int i,j,t,p,ct=0,s=0,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%d",&p);
		int h[p];
		for(i=0;i<p;i++)
		{
			scanf("%d",&h[i]);
		}
		s=0;
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
			s++;
			if(i%7==5)
			{
				i+=2;
			}
		}
		printf("%d\n",s);
	}
}