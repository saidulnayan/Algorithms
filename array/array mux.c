#include<stdio.h>
int main()
{
    int r1,r2,c1,c2,sum=0;
    int Amatrix[10][10],Bmatrix[10][10],Mult[10][10]={0};   // you can't declare a 2D matrix size like this  int Amatrix[r1][c1],Bmatrix[r2][c2],Mult[r1][c2];
    printf("Enter rows and column for A matrix: ");         // specify the size
    scanf("%d %d",&r1,&c1);

    printf("Enter rows and column for B matrix: ");
    scanf("%d %d",&r2,&c2);

     while(c1!=r2)
    {
        printf("Error !!!! Column of A matrix not equal to row of B matrix.");

        printf("Enter rows and column for A matrix: ");
        scanf("%d %d",&r1,&c1);

        printf("Enter rows and column for B matrix: ");
        scanf("%d %d",&r2,&c2);
    }


    printf("\nEnter element for A matrix.\n");
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            printf("Amatrix[%d][%d] = ",i,j);
            scanf("%d",&Amatrix[i][j]);
        }
    }

    printf("Enter element for B matrix.\n");
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            printf("Bmatrix[%d][%d] = ",i,j);
            scanf("%d",&Bmatrix[i][j]);
        }
    }

    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            for(int k=0; k<c1; k++)
            {
                sum = sum + Amatrix[i][k] * Bmatrix[k][j];  // it will be Amatrix[i][k], not Amatrix[i][j]

            }
            Mult[i][j] = sum;
            sum = 0;
        }
    }

    printf("A Matrix = \n");
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c1; j++)
        {
            printf("%d \t",Amatrix[i][j]);    // use \t for format output

        }
        printf("\n");   //  use the new line outside the inner for loop
    }

    printf("\nB Matrix = \n");
    for(int i=0; i<r2; i++)
    {
        for(int j=0; j<c2; j++)
        {
            printf("%d \t",Bmatrix[i][j]);   // use \t for format output

        }
             printf("\n");   // use the new line outside the inner for loop
    }

    printf("\nMultiplication Matrix = \n");
    for(int i=0; i<r1; i++)
    {
        for(int j=0; j<c2; j++)
        {
            printf("%d \t",Mult[i][j]); // use \t for format output

        }
        printf("\n");  // use the new line outside the inner for loop
    }

    return 0;
}
