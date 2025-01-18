#include<stdio.h>

int solve(int* A,int n1){
    int i,j,k,max,min,ans;
    int B[n1];
    for (i=0;i<n1;i++)
    {
        for (j=2;j<=A[i];j++)
        {
            if(A[i]%j==0){
                B[i]=j;
                break;
            }

        }

    }

    max = B[0];
    min = B[0];

    for (k=0;k<n1;k++)
    {
        if(B[k]>max){
            max = B[k];
        }
        if(B[k]< min){
            min = B[k];
        }

    }

    ans = max-min;

    printf("%d",ans);

     return 0;
}

int main()
{
    int A[]= {2,4,8};
    int n1=3;

solve(A,n1);


  return 0;

}
