#include<stdio.h>
int main()
{
    int i,n,a[100][100],j,sum=0,m;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i!=0 && j!=0 && i!=n-1 && j!=m-1 )
            {
                sum=sum+a[i][j];
            }
        }
    }
    printf("%d",sum);
}