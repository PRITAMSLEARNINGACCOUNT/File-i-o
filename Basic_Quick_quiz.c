#include <stdio.h>
int main()
{
    char array[500];
    FILE *ptr;
    ptr = fopen("Taking string via input in c.txt", "w");
    printf("Give some charecter or a word or a sentence\n");
    gets(array);
    fputs(array, ptr);
    fclose(ptr);
    FILE *ptr2;
    ptr = fopen("Quick quiz.txt", "r");
    if (ptr == NULL)
    {
        printf("The file is not founded");
    }
    else
    {
        char c;
        printf("The file has been founded and The things which are written in that file is \n");
        c = fgetc(ptr);
        while (c != EOF)
        {
            printf("%c", c);
            c = fgetc(ptr);
        }
    }
    fclose(ptr2);
    // Writing in a text file charecter by charecter.
    FILE *ptr3;
    ptr3 = fopen("Hello world(Generated).txt", "w");
    fputc('H', ptr);

    return 0;
}
