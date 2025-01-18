#include <stdio.h>
int main()
{
    int i,n,s1,s2;
    printf("enter the size of array:   ");
    scanf("%d",&n);
    if(n>0)
    {
       printf("enter the first num:  ");
       scanf("%d",&s1);
       n--;
       if(n>0)
       {
           for( ;n>=1;n--)
           {
           printf("enter the next num: ");
           scanf("%d",&s2);
           if(s2>s1)
            {
               s1=s2;
            }
           }
       }
    }
    printf("the largest num is:   %d",s1);
    return 0;
}
