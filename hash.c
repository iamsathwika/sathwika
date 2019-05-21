#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int h[9]={1,1,1,1,1,1,1,1,1};
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1] && h[i]<=h[i+1])
        {
            h[i]=h[i]+h[i+1];
        }
        else if(a[i]<a[i+1] && h[i]>=h[i+1])
        {
            h[i+1]=h[i]+h[i+1];
        }
    }
    for(i=0;i<n;i++)
    {
       c=c+h[i];
    }
   printf("%d",c);
}
