#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    if(n==1||n==0)
    {
        return 0;
    }
    else
    {
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
    }
    if(c==0)
    {
        return 1;
    }
    }
}
int main()
{
    int n,i,r,count=0,d=0,k;
    scanf("%d",&n);
    k=n;
    if(prime(n)==1)
    {
        while(n>0)
        {  
           r=n%10;
           if(prime(r)==1)
           {
               d++;
           }
           n=n/10;
           count+=1;
        }
        if(d==count)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }
}