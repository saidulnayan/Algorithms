#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int solve(int* A, int n1)
{
    int i,j,count,tcount=0;

    for(i=0;i<n1-1;i++)
    {
        count=1;

       for(j=i+1;j<n1;j++)
       {
           if(A[i]==A[j])
           {
               count++;
               if(count>2)
               {
                   tcount++;

               }

           }

       }
       if(count>=1 && count<=2)
           {
               tcount++;

           }

    }

    printf("%d",tcount);

}

int main()
{
    int s,i,j;
    scanf("%d",&s);

    if(s>=1 && s<= pow(10,5))
    {

        int *A;
        A=(int *)malloc(s*sizeof(int));

        for(i=0;i<s;i++)
        {
            scanf("%d",&A[i]);

        }

        solve(A,s);
    }




}
