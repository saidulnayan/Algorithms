#include<stdio.h>
int main()
{
    int n1,n2,x,gcd;
    scanf("%d %d",&n1,&n2);
    x=(n1<=n2)? n1:n2;
    for(;x>=1;x--)
    {
       if(n1%x==0 && n2%x==0)
        {
        gcd=x;

        break;
        }

    }
    printf("gcd is %d",gcd);




  return 0;

}
