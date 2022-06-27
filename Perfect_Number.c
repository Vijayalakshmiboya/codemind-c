#include<stdio.h>
int main()
{
    int n,r,sum=0,temp,i;
    scanf("%d",&n);
    temp=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(n==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}