#include<stdio.h>
int array[100],n;
int main()
{
    int choice,num;
    n=0;
    while(1)
    {
        print("1. insert element in max heap : \n");
        print("2. display element in max heap: \n");
        print(" Enter your choice : ");

        scanf("%d,"&choice);
        switch(choice)
        {
        case 1:
            print("Enter the element in max heap : ");
            scanf("%d",&num);
            insert(num,n);
            n=n+1;
            break;
        case 2:
            display();
            break;
        default
            exit(0);

        }
    }



insert(int num,int location)
{
    int parentnode;
    while(location>0)
    {
        parentnode=(location-1)/2;
        if(num<=array[parentnode])
        {
            array[location]=num;
            return;
        }
        array[]
    }
}
  return 0;

}
