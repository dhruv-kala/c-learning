#include <stdio.h>
int main(int argc, char const *argv[])
{

    int marks;
    printf("Enter your marks\n");
    scanf("%d",&marks );

    if (marks>35)
    {
      printf("you have passed the exam");      
    }
    else
    {
        printf("you have failed");
    }


    return 0;
}
