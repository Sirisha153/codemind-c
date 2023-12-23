#include<stdio.h>
int main()
{
    int p,che,b,m,c;
    float n;
    scanf("%d%d%d%d%d",&p,&che,&b,&m,&c);
    n=(p+che+b+m+c)/5.0;
    if(n>=90)
    {
        printf("Grade A");
    }
    else if(n>=80)
    {
        printf("Grade B");
    }
    else if(n>=70)
    {
        printf("Grade C");
    }
    else if(n>=60)
    {
        printf("Grade D");
    }
    else if(n>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}