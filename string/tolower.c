#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char a[20];
    gets(a);
    tolower(a);
    printf("%s", tolower(a));



  return 0;

}
