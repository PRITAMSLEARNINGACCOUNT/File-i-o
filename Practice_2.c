#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Practice-2.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    int multable[100];
    for (int i = 1; i <= 10; i++)
    {
        multable[i] = num * i;
    }
    fclose(ptr);
    FILE *ptr2;
    ptr2 = fopen("Practice-2-output.txt", "w");
    fprintf(ptr2, "So The multiplication table of %d is\n", num);
    for (int ia = 1; ia <= 10; ia++)
    {
        fprintf(ptr2, "%d * %d = %d\n", ia, num, multable[ia]);
    }
    fclose(ptr2);

    return 0;
}