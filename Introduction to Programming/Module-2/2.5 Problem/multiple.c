#include <stdio.h>

int main()
{

    int a;
    int b;

    scanf("%d", &a);

    scanf("%d", &b);

    if (a % b == 0 || b % a == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}