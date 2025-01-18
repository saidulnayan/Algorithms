#include <stdio.h>
int main()
{
    int a[100][100],i,j,n,sum=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i][j];
        printf("")
    }

    return 0;
}

