#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    char a[n], b[n];
    for(i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
        b[i]=0;
    }
    for(i=0;i<n;i++)
    {
       if(a[i]=='{' || a[i]=='}' ||a[i]=='(' ||a[i]==')')
        {
            a[i]='\0';
        }
        else
        {
           for(j=0;j<n;j++)
           {
               b[j]=a[i];
           }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%c",b[i]);
    }

}
