#include <stdio.h>
int main()
{

    FILE *ptr5;
    FILE *ptr4;

    ptr5 = fopen("Integers-Output.txt", "w");
    ptr4 = fopen("Integers-input.txt", "w");
    float num;
    float num2;
    float a;
    float b;
    printf("Give an integer value\n");
    scanf("%f", &a);
    printf("Give a second integer value\n");
    scanf("%f", &b);
    fprintf(ptr5, "%f %f", a, b);
    fclose(ptr5);

    ptr5 = fopen("Integers-Output.txt", "r");
    fscanf(ptr5, "%f", &num2);
    fscanf(ptr5, "%f", &num);

    printf("The First number is %f\n", num2);
    printf("So the second number is %f\n", num);

    fprintf(ptr4, "%f\n%f\n%f\n", num + num2, num - num2, num * num2);
    fprintf(ptr4, "%.3f\n", num / num2);
    fclose(ptr4);
    fclose(ptr5);
    return 0;
}