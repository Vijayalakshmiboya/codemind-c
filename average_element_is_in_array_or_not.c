#include<stdio.h>
int main()
{
    int n,b,i,s=0,c=0,m;
    scanf("%d",&n);
    int arr[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    b=s/n;
    for(i=0;i<n;i++)
    {
        if(b==arr[i])
        {
            c++;
        }
    }
    if(c>0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}