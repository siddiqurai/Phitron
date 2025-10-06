#include <stdio.h>

int main()

{
    // int taka;
    // printf("Enter Amount : ");
    // scanf("%d", &taka);

    // if (taka >= 100)
    // {
    //     printf("Burger Khabo");
    // }
    // else if (taka >= 50)
    // {
    //     printf("Fuccka Khabo");
    // }
    // else if (taka >= 20)
    // {
    //     printf("Chips khabo");
    // }

    // else
    // {
    //     printf("Kichu Khabo na");
    // }

    int tour;
    printf("Enter Money Amount : ");
    scanf("%d", &tour);

    if (tour >= 5000)
    {
        printf("Cox's Bazar Jabo");
    }
    else if (tour >= 10000)
    {
        printf("Saint Martin Jabo");
    }
    else if (tour < 10000)
    {
        printf("Farot Asbo");
    }
    else if (tour < 0)
    {
        printf("Kothao Jabo na");
    }

    return 0;
}