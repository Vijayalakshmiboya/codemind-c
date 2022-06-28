#include<stdio.h>
int main()
{
    int n,i,a[100],t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    t=a[0];
    for(i=0;i<n;i++)
    {
        if(t>a[i])
        {
            t=a[i];
        }
    }
    printf("%d",t);
}