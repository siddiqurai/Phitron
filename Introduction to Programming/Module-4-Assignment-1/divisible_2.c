#include <stdio.h>

int main()
{

    int N;
    scanf("%d", &N);

    for (int i = 0; i <= N; i++)
    {
        if (N % 3 == 0 || N % 7 == 0)
        {
            
        }
        printf("%d\n", N);
    }

    return 0;
}