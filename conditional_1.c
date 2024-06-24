#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter first number:");
    scanf("%d", &a);

    printf("Enter second number:");
    scanf("%d", &b);
    if (a == b)
    {
        printf("the number is equal");
    }
    else
    {
        printf("the number is not equal");
    }
    return 0;
}