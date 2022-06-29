#include<stdio.h>
int main()
{
    int n,m,arr[100],c=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(m==arr[i])
        {
            c++;
        }
    }
    printf("%d",c);
}