#include <stdio.h>

int main()

{
    int taka;
    printf("Enter Amount : ");
    scanf("%d", &taka);

    if (taka >= 100)
    {
        printf("Burger Khabo");
    }
    else if (taka >= 50)
    {
        printf("Fuccka Khabo");
    }
    else if (taka >= 20)
    {
        printf("Chips khabo");
    }

    else
    {
        printf("Kichu Khabo na");
    }

   

    return 0;
}