#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100];
    printf("enter your character: ");
    gets(a);
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
        printf("palindrome");
    else
        printf("not palindrome");

getch();
}
