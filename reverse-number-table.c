#include <stdio.h>

int main()
{
    int a, i, mul = 0;

    printf("Enter the number for table: ");
    scanf("%d", &a);

    for (i = 10; i >= 1; i--)
    {
        mul = a * i;
        printf("%d * %d = %d \n", a, i, mul);
    }

    return 0;
}