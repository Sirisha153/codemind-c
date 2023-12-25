#include<stdio.h>
int main()
{
    int a,x,b;
    scanf("%d%d%d",&a,&x,&b);
    if(a<=(x+(2*b)))
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}