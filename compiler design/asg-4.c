#include <stdio.h>
#include <stdlib.h>


void check_comment (char) ;  // checks for both types of comments
void block_comment () ;   //  multiline comments
void single_comment () ;   //single line comments


    FILE *fp , *fp2;

int main(void)
{
    char file_path1[80];
    char file_path2[80];
    char c;



    printf("Enter input file name:\n");
    scanf("%s", file_path1);
    printf("Enter output file name:\n");
    scanf("%s", file_path2);

    fp = fopen (file_path1,"r") ;   // open the first file in read mode
    fp2 = fopen (file_path2,"w") ;    // open the second file in write mode

    if (fp == NULL)
        printf("Can't open %s for reading.\n", file_path1);
    else
    {
        while((c=fgetc(fp))!=EOF)       // read the file character by character
        {
            check_comment(c);   // check for each character if it seems like the beginning of a comment
        }
    }

    fclose(fp);
    fclose(fp2);

    printf("\nSuccessfully updated.\t ( thank you )");

    getch();
}


void check_comment(char c)
{
    char d;

    if( c =='/')   // if the character starts with '/', it 'could' be a comment
    {

        if((d=fgetc(fp))=='*')   // if the next character we read is '*', it is the beginning of multiblock comment
        {
             block_comment();  // pass control to function that handles multiblock comments
        }

        else if( d == '/')   // else if the next character we read is '/', it is the beginning of single line comment
        {
          single_comment();// pass control to function that handles single line comment
            fputc('\n',fp2);
        }
        else
        {
            // if both the cases fail, it is not a comment, so we add the character as it is in the new file.
            fputc(c,fp2);
            fputc(d,fp2);
        }
    }

    // again, if all above fails, we add the character as it is in the new file.
    else
    {
        fputc(c,fp2);
    }
}


// function that handles block comments
void block_comment()
{

    char d,e;

    while((d=fgetc(fp))!=EOF)   // the block comment has started, read the character by character
    {
    /* keep reading the characters and do nothing,
    as they do not have to be copied into the new file (we are removing the comments)
    */
        if(d=='*')    // if the comment 'seems' like ending
        {
            e=fgetc(fp);  // check if it actually ends (block comments end with '*/')

            if(e=='/')  // if the comment 'has' ended, return from the function
            {
                 return;
            }
        }
   }

}


// function that handles single line comments
void single_comment()
{
    char d;

    while((d=fgetc(fp))!=EOF)  // the single line comment has started, read the character by character
    {
    /* keep reading the characters and do nothing,
    as they do not have to be copied into the new file (we are removing the comments)
    */
        if(d=='\n')// check if the comment ends (single comments end with '\n', or newline)
            return;  // if the comment 'has' ended, return from the function

    }

}
