#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[50];

    printf("What is your name? ");
    scanf("%s", name);
    printf("Hello there, %s! Welcome to C programming.\n", name);

    return 0;
}
