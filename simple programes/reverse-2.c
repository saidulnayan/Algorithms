#include <stdio.h>

int main ()
{
    int n1,n2,r,rev1=0,rev2=0,len1=0,len2=0;
    printf("enter an integer: ");
    scanf("%d",&n1);
    printf("enter an integer: ");
    scanf("%d",&n2);

    while(n1!=0)
    {
        r=n1%10;
        rev1=rev1*10+r;

        n1=n1/10;
    }
    while(n1>0)
    {
    n1=n1/10;

    len1++;
    }
    int A1[len1];
    for (int i = 0; i < len1; i++)
		A1[]

    printf("\nreverse number= %d",rev);
    getch();
}
