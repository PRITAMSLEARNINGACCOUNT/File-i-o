#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Practice-1.txt", "r");
    int num1, num2, num3;
    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);
    fscanf(ptr, "%d", &num3);
    fclose(ptr);
    printf("So the integer on the file attached to this programme is %d,%d,%d\n", num1, num2, num3);

    return 0;
}