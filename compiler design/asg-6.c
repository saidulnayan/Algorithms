#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[200];
    int i,c=0,n=1,s=0;
    gets(a);

    for (i=0;a[i]!='\0';i++)
    {
        c++;

        if(a[i]==' ' || a[i]=='\t')
        {
            s++;
        }

    }

    printf("\nNumber of Lines: %d",n);
    printf("\nNumber of spaces: %d",s);
    printf("\nNumber of characters: %d",c);

  getch();

}
