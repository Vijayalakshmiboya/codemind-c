#include<stdio.h>
int main()
{
    int n,i,arr[100],odd=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            odd++;
        }
    }
    if(odd<=2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}