#include<stdio.h>
int main()
{
    int n,sum=0,i;
    int arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2!=0)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
}