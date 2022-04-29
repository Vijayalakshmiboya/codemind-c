
#include<stdio.h>
int main()
{
    int N,r,largest=0;
    scanf("%d",&N);
    while(N>0)
    {
        r=N%10;
        N=N/10;
        if(largest<r)
        {
            largest=r;
        }
    }
    printf("%d",largest);
}
