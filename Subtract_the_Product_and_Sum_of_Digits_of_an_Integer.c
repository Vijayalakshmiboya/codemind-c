
#include<stdio.h>
int main()
{
    int r,sum=0,n,p=1,result=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        p=p*r;
        n=n/10;
        result=p-sum;
    }
    printf("%d",result);
}
