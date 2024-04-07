#include <stdio.h>

int main()
{
    printf("Prime Numbers \n");
    int number = 1, count = 10;

    while (count > 0)
    {
        number++;
        int i;

        for (i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                break;
            }
        }

        if (i == number)
        {
            printf("%d ", number);
            count--;
        }
    }

    return 0;
}