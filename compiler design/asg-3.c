#include <stdio.h>
#include<stdlib.h>

int main()
{
    char file_path[80];
    FILE *fptr;

    char ch;
    int character = 0, lines = 0, spaces = 0, words = 0;

    printf("Enter file name:\n");
    scanf("%s", file_path);

    fptr = fopen(file_path, "r");

    if (fptr == NULL)
        printf("Can't open %s for reading.\n", file_path);

    else
    {
        while ((ch = fgetc(fptr)) != EOF)
        {
            character++;

        if (ch == '\n' || ch == '\0')
            lines++;

        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;

        if (ch == ' ' || ch == '\t')
            spaces++;

        }

        if (character > 0)
        {
            words++;
            lines++;
        }

    }


        fclose(fptr);

        printf("\nNumber of characters = %d", character);
        printf("\nNumber of spaces = %d", spaces);
        printf("\nNumber of words = %d", words);
        printf("\nNumber of lines = %d", lines);

    getch();
}
