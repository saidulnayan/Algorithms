#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,c,p,a,b;
    char n1[100],n2[100],sum[110];
    printf("input 1st number string:  ");
    gets(n1);
    printf("input 2nd number string:  ");
    gets(n2);

    n=(strlen(n1)>=strlen(n2))? strlen(n1):strlen(n2);

    for(i=n;i>=0;i--)
    {
        a=n1[n]-48;
        b=n2[n]-48;
        p=a+b;

        if(p>9)
        {
            c=1;
            //sum[n]=p%10;
        }
        else{
            c=0;
           // sum[n]=p;
        }


    }

for(i=0;i<=n;i++)
{
    printf("%c",sum[i]);

}



  return 0;

}
