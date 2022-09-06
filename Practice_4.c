#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Test.txt", "w");
    char array[100];
    char array2[100];
    int emp1;
    int emp2;
    printf("Give the name of the first employee\n");
    gets(array);

    printf("Give the Salary of the first employee\n");
    scanf("%d", &emp1);

    printf("Give the name of the first employee\n");
    fflush(stdin);
    gets(array2);

    printf("Give the Salary of the Second employee\n");
    scanf("%d", &emp2);

    for (int i = 0; array[i] != '\0'; i++)
    {
        fputc(array[i], ptr);
    }
    fprintf(ptr, ", %d\n", emp1);
    for (int i = 0; array2[i] != '\0'; i++)
    {
        fputc(array2[i], ptr);
    }
    fprintf(ptr, ", %d\n", emp2);
    fclose(ptr);
    return 0;
}