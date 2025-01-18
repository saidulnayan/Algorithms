#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main()
{
    char str[200];
    int flag=0,i;

    gets(str);

     for (i=0;str[i]!='\0';i++)
     {
         if ((!strcmp(str, "if") || !strcmp(str, "else") || !strcmp(str, "while")
        || !strcmp(str, "do") || !strcmp(str, "break")
        || !strcmp(str, "continue") || !strcmp(str, "int")
        || !strcmp(str, "double") || !strcmp(str, "float")
        || !strcmp(str, "return") || !strcmp(str, "char")
        || !strcmp(str, "case") || !strcmp(str, "char")
        || !strcmp(str, "sizeof") || !strcmp(str, "long")
        || !strcmp(str, "short") || !strcmp(str, "typedef")
        || !strcmp(str, "switch") || !strcmp(str, "unsigned")
        || !strcmp(str, "void") || !strcmp(str, "static")
        || !strcmp(str, "struct") || !strcmp(str, "goto")) || (isdigit(str[0])) )

        {
        flag=0;
        break;
        //printf("Not a Identifier");
        }
        if((isalpha(str[i])) || (str[i]=="_") || (isdigit(str[i])))
        {
            flag=1;
        }
        else
        {
            flag=0;
            break;
        }

     }


    if(flag==1)
    {
        printf("Identifier");
    }
    else if(flag==0)
    {
        printf("Not a Identifier");
    }


   getch();

}
