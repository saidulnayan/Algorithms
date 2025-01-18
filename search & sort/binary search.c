#include <stdio.h>
int main()
{
    int a[10],i,n,c,first,last,middle;

    while(1)
    {

    printf("\nenter the number of elements in the array :   ");
    scanf("%d",&n);
    if(n<=0)
        break;

    printf("enter %d numbers in ascending order :\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the element you want to search :   ");
    scanf("%d",&c);

    first=0;
    last=n-1;
    middle=(first+last)/2;

    while(first<=last)
    {
        if(a[middle]==c)
        {
            printf("%d is found in the position %d \n",c,middle+1);
            break;
        }
        else if(a[middle]<c)
            first=middle+1;
        else
            last=middle-1;

            middle=(first+last)/2;
    }
        if(first>last)
            printf("%d is not present in the array\n",c);

    }
    return 0;
}
