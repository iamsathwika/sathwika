#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	int n,m,sum=0,j,f=0,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		int i,a[n],b[m],cu=0;
		for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
		for(i=1;i<=m;i++)
		scanf("%d",&b[i]);
		int h[100]={0},h1[100]={0};
		for(i=1;i<=n;i++)
		{
			h[a[i]]++;
		}
		for(j=1;j<=m;j++)
		{
			h1[b[j]]++;
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=m;j++)
			{
				if(h[a[i]]!=0 && h1[b[j]]!=0)
				{
					
				sum=a[i]*b[j];
				cu=round(pow(sum, 1.0/3.0));
				if(cu*cu*cu==sum)
				{
					f++;
					i++;
					
				}
			}
		}
			h[a[i]]--;
			h1[b[j]]--;
		}
		if(f>0)
		{
			ans=f*f+f*f;
			printf("%d\n",ans);
		}
		else
		{
			printf("-1");
		}
	}
}

