#include<stdio.h>
int main()
{
    int r,i,x,c,j,sum=0;
    scanf("%d %d", &r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum=sum+a[i][j];
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}

