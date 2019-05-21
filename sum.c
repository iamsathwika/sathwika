#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int i,j,k,a[n];
	int sum=0,sum1=0;
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		sum=0;
		sum1=0;
		for(j=i+1;j<n;j++)
		{
	sum=sum+a[j];
}
	for(k=i-1;k>=0;k--)
	{
	sum1=sum1+a[k];
}
if(sum1==sum)
printf("%d",i);
}
return 0;
}
