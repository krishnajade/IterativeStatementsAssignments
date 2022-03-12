// Print factorial of 1 to 5 numbers
#include <stdio.h>
void main()
{
    int i, fact = 1, num;

    for (int num = 1; num < 6; num++)
    {
        fact = 1;
        for (int i = 1; i <= num; i++)
        {
            fact = fact * i;
        }
        printf("%d\n", fact);
    }
}