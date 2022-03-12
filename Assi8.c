/*Accept a number from user. Print all odd numbers till the accpeted number. Also print the count of numbers printed.
Eg. number accepted =9
numbers printed = 13579
count of numbers =5*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int num, count = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("The odd numbers till %d are", num);

    for (int i = 1; i <= num; i += 2)
    {
        count++;
        printf(" %d  ", i);
    }
    printf("\nCount of numbers is %d", count);
}