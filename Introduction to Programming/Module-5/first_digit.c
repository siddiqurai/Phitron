#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int first__digit = x / 1000;
    if (first__digit % 2 == 0)
    {
        printf("EVEN");
    }
    else
    {
        printf("ODD");
    }

    return 0;
}