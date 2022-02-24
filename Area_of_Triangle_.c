
#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,C;
    float s,area;
    scanf("%d%d%d%f",&A,&B,&C,&s);
    s=(A+B+C)/2.0;
    area=sqrt(s*(s-A)*(s-B)*(s-C));
    printf("%.2f",area);
}
