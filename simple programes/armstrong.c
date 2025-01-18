#include <stdio.h>

int main ()
{
    int n,r,temp=0,sum=0;
    printf("enter an integer: ");
    scanf("%d",&n);
    temp=n;

    while(n>0){
        r=n%10;
        sum+= r*r*r;
        n=n/10;
    }
    if(temp==sum){
        printf("\n%d is an Armstrong number",temp);
    }
    else{
        printf("\n%d is not an Armstrong number",temp);
    }

    getch();
}
