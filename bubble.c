#include<stdio.h>
int main()
{
	int i,j,t,n,c=0;
	scanf("%d",&t);
	int temp;
	while(t--)
	{
		scanf("%d",&n);
		int a[n];
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
				c++;
			}
		}
		printf("%d",c);
}
}
