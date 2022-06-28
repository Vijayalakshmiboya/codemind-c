#include<stdio.h>
int main()
{
    int n,i,arr[100],sum=0,sum1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==1)
        {
            sum=sum+arr[i];
        }
        else
        {
            sum1=sum1+arr[i];
        }
    }
    printf("%d",sum1-sum);
}