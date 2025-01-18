#include<stdio.h>

int main()
{
    float num;
    scanf("%f",&num);

    if(num == (int)num)
    {
        printf("Integer");
    }
    else{
        printf("Decimal");
    }

  return 0;

}
