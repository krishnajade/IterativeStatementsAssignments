// Accept a number and  print tables from 1 to that number
// e.g. number=6
// print tables from 1 to 6
#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= num; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
}