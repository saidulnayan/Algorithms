
#include <stdio.h>
#include <stdlib.h>

/* Functions */
void check_comment (char) ;  // checks for both types of comments, then passes on control to below comments
  // handles single line comments

 /* 2 file pointers - 1st is for the file in which we check for comments,
    and 2nd is the file in which we copy the code after removing comments  */


int main(void)
{
    char file_path1[80];
    char file_path2[80];
    char c;

    FILE *fp , *fp2;

    printf("Enter input file name:\n");
    scanf("%s", file_path1);
    printf("Enter output file name:\n");
    scanf("%s", file_path2);

    fp = fopen (file_path1,"r") ;
    fp2 = fopen (file_path2,"w") ;

    if (fp == NULL)
        printf("Can't open %s for reading.\n", file_path1);
    else if (fp2 == NULL)
        printf("Can't open %s for reading.\n", file_path2);
    else
    {
        while((c=fgetc(fp))!=EOF)
        {
            if( c == 'i')
            {
                char d=fgetc(fp);

                if(d=='f')
                {
                    fputc('I',fp2);
                    fputc('F',fp2);
                }

                else
                {
                    fputc(c,fp2);
                    fputc(d,fp2);
                }

            }

            else
            {
                fputc(c,fp2);
            }
        }
    }


    fclose(fp);
    fclose(fp2);

    printf("\nSuccessfully updated.\t ( thank you )");

    getch();
}


