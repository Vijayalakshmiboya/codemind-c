#include<stdio.h>
int main()
{
    int a=0,b=1,c=a+b,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",a);
        a=b;
        b=c;
        c=a+b;
    }
}