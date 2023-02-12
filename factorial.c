#include <stdio.h>

int main()
{

    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

    int i = 1, mul = 1;
    while (i <= a)
    {
        mul = mul * i;
        i++;
    }
    printf("The factorial is:%d", mul);
    return 0;
}
