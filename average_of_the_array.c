#include<stdio.h>
int main()
{
    int n,arr[100],i,s=0;
    float b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+arr[i];
    }
    b=(float)s/n;
    printf("%.2f",b);
}