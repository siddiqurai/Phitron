#include <stdio.h>

int main()
{

    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d-Odd \n", i);
        }
        else if (i % 2 == 0)
        {
            printf("%d-Even \n", i);
        }
    }
}