#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
        if (i % 5 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        
    }

    return 0;
}