#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        

        if (n % 5 == 0)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
       printf("%d\n", i);
        i++;
    }

    return 0;
}