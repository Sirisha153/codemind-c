#include<stdio.h>
int main()
{
    int n,rows,cols;
    scanf("%d",&n);
    for(rows=1;rows<=n;rows++)
    {
        for(cols=1;cols<=n;cols++)
        {
            printf("%d ",rows);
        }
        printf("
");
    }
    return 0;
}