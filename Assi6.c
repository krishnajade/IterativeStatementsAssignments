// 1111
// 222
// 33
// 4
#include <stdio.h>
void main()
{
    for (int i = 1; i < 5; i++)
    {
        printf("\n");
        for (int j = 4; j >= i; j--)
        {
            printf("%d", i);
        }
    }
}