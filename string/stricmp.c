#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[80];
    gets(str);

if (isdigit(str[0]))
{
        printf("digit");
        }

else
     printf("not equal");


  return 0;

}
