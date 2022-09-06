#include <stdio.h>
#include <string.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Practice_3.txt", "r");
    char string[100];
    fgets(string, 100, ptr);
    printf("The text which will be written twice in new generated text file is\n");
    puts(string);
    fclose(ptr);
    FILE *ptr2;
    ptr2 = fopen("Genrated file for practice 3.txt", "w");
    for (int i = 0; string[i] != '\0'; i++)
    {
        fputc(string[i], ptr2);
    }
    fprintf(ptr2, "\n");
    for (int i = 0; string[i] != '\0'; i++)
    {
        fputc(string[i], ptr2);
    }

    return 0;
}