#include<stdio.h>
int main()
{
    int n,m,arr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            m=arr[i];
        }
    }
    printf("%d",m);
}