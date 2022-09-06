#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Generated-number.txt", "w");
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    fprintf(ptr, "%d\n", num);
    fclose(ptr);
    FILE *ptr2;
    ptr2 = fopen("Generated-number.txt", "r");
    int n;
    fscanf(ptr2, "%d", &n);
    fclose(ptr2);
    FILE *ptr3;
    ptr3 = fopen("Generated-number.txt", "w");
    fprintf(ptr3, "%d", n * 2);
    fclose(ptr3);

    return 0;
}