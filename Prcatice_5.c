#include <stdio.h>
int main()
{
    int num;
    FILE *ptr;
    ptr = fopen("Practice_5.txt", "r");
    fscanf(ptr, "%d", &num);
    fclose(ptr);
    FILE *ptr2;
    ptr2 = fopen("Practice_5.txt", "w");
    int n = num;
    fprintf(ptr2, "%d", n * 2);
    fclose(ptr2);

    return 0;
}