#include<stdio.h>
int main()
{
    int n,i,arr[100],m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            m=i;
        }
    }
    printf("%d",m);
}