/*Accept 2 numbers m and n. Print numbers from  m to n*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
    int m, n;
    printf("Enter two numbers:\n");
    scanf("%d%d", &m, &n);
    printf("The numbers are ");

    for (int i = m; i <= n; i++)
    {
        printf(" %d", i);
    }
}