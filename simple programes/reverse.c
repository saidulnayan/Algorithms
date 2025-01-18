#include <stdio.h>
int rev (int n,int r)
{
    int rev=0;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("\n\t\t reverse number=%d",rev);
}

int main()
{
    int n,r;
    rv:
    printf("\t\tenter a number to reverse:");
    scanf("%d",&n);
    rev(n,r);
    printf("\n\n\t\t============================== thank you ==============================\n");
    getch();
    goto rv;
}
