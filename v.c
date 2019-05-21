#include<stdio.h>
int main(){
int v;
int n;
scanf("%d",&n);
scanf("%d",&v);
int i,j,a[n];
int sum=0;
int c=1;
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
	sum=a[i];
	c=1;
	for(j=i+1;j<n;j++)
	{
		sum=sum+a[j];
		c++;
		if(sum>v)
		{
			sum=sum-a[j];
			c--;
		}
}
if(sum==v)
{
	printf("minimum of %d numbers",c);
	printf("\n");
}
}
return 0;
}
