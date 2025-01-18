#include<stdio.h>
#include<string.h>
int main()
{
    int i,d;
    char a[]="BANGLADESH";
    printf("\n\n");
    for (i=1;i<=10;i++)
    {
        printf("%-10.*s\n",i,a);

    }
    printf("------------\n");
    for (i=10;i>0;i--)
    {
        printf("%-10.*s\n",i,a);


    }


getch();
  return 0;

}
