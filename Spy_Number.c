#include<stdio.h>
int main()
{
    int n,i,r,sum=0,mul=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
        mul=mul*r;
    }
    if(sum==mul)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}