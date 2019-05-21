#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==9)
            {
            if(i!=0 || i!=n-1 || j!=0 ||j!=n-1)
            {
                a[i][j]='X';
            }
            }
         printf("%d ",a[i][j]);
       }
      printf("\n");
        }
return 0;
}
