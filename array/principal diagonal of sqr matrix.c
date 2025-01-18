#include <stdio.h>
int main()
{
    int a[100][100],i,j,n;
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
        printf("%d\n",a[i][i]);
    }

    return 0;
}
