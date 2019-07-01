#include<stdio.h>

int main(void)
{
    int integer1;
    int integer2;
    int sum;

    printf("Enter first integer\n");
    scanf("%d", &integer1);

    printf("Enter second integer\n");
    scanf("%d", &integer2);

    printf("Sum of %d and %d la %d\n", integer1, integer2, integer1 + integer2);

}