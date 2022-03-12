// Print all the prime numbers between 1 to 100
#include <stdio.h>
void main()
{
    printf("\n\n\t");
    for (int num = 1; num <= 100; num++)
    {
        // prime number checking
        int temp = 0;
        for (int j = 2; j < (num / 2); j++)
        {
            if (num % j == 0)
            {
                temp = 1;
                break;
            }
        }
        if (temp == 0)
        {
            printf("%d  ", num);
        }
    }
    printf("\n\n\t");
}
