#include <stdio.h>
int main()
{
    int age;
    printf("Enter you age\n");

    scanf("%d", &age);
    printf("you have entered age %d as your age\n", age);

    if (age >= 18)
    {
        printf("you can vote\n");
    }
    else if (age >= 10)
    {
        printf("you are between 10 to 18 and you can vote for kids\n");
    }
    else
    {
        printf("you cannot vote\n");
    }
    return 0;
}
