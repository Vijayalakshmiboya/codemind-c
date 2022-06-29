#include<stdio.h>
int main()
{
    int n,i,arr[100],t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    t=arr[0];
    for(i=0;i<n;i++)
    {
        if(t<arr[i])
        {
            t=arr[i];
        }
    }
    printf("%d",t);
}