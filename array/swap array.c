#include <stdio.h>
int main()
{
    int i,a[10];
    printf("input '10' numbers by pressing 'enter'\n");
    for(i=0;i<=9;i++)
    {
        scanf("%d",& a[i]);

    }
    i=a[0];
    a[0]=a[9];
    a[9]=i;
    printf("your present first and last swap number is :\n\n");
        for(i=0;i<=9;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n\n\n\t\t========== thank you =========="),
    getch();
}
