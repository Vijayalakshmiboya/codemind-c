#include<stdio.h>
#include<math.h>
int main()
{
    int n,sum=0,dc=0,d,temp;
    scanf("%d",&n);
    temp=n;
    while(temp)
    {
        temp=temp/10;
        dc++;
    }
    temp=n;
    while(temp)
    {
        d=temp%10;
        sum=sum+pow(d,dc);
        temp=temp/10;
        dc--;
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}