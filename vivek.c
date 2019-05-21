#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n],i,j;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        int l=0,r=0;
        for(i=1;i<n;i++)
        {
            for(j=0;j<i;j++)
            l=l+a[j];
            for(j=i+1;j<n;j++)
                r+=a[j];
            if(l==r)
            {
            printf("%d %d",i+1,l);
            printf("\n");
            break;
        }
        l=r=0;
    }
    }
}
