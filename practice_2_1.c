#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Practice-2-1.txt", "w");
    int num_input_write;
    printf("Give an integer number\n");
    scanf("%d", &num_input_write);
    fprintf(ptr, "%d", num_input_write);
    fclose(ptr);
    ptr = fopen("Practice-2-1.txt", "r");
    FILE *ptr2;
    ptr2 = fopen("Generated_multiplication_table_using_c_programme", "w");
    int getting_integer_input;
    fscanf(ptr, "%d", &getting_integer_input);
    fprintf(ptr2, "So the multplication table of %d is\n", getting_integer_input);
    int multable[10];
    for (int i = 1; i <= 10; i++)
    {
        multable[i] = i * getting_integer_input;
    }

    for (int ia = 1; ia <= 10; ia++)
    {
        fprintf(ptr2, "%d\n", multable[ia]);
    }
    fclose(ptr);
    fclose(ptr2);

    return 0;
}