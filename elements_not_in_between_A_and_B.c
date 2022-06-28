#include<stdio.h>
int main()
{
    int n,a,b,arr[100],c=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(arr[i]<a && arr[i]<b || arr[i]>a && arr[i]>b)
        {
            c=1;
            printf("%d ",arr[i]);
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}