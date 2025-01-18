#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b)
    {
        if(a<c)
        {
            printf("small:  %d",a);
        }
        else
            printf("small:  %d",c);
    }
    else
        printf("small:  %d",b);

    return 0;
}

