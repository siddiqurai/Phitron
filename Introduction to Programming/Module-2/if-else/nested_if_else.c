#include <stdio.h>

int main()
{

    int food;
    printf("Food Tk : ");
    scanf("%d", &food);

    if (food >= 1000)
    {
        printf("Restaurent Jabo\n");

        if (food >= 2000)
        {
            printf("Buffet Jabo\n");
        }
        else
        {
            printf("Ferot Cholay Asbo\n");
        }
    }
    else
    {
        printf("Kothao Jabo na");
    }

    return 0;
}
