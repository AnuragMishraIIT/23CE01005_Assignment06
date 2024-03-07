/*
    LAB ASSIGNMENT: 06
    Question number: 01

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 01/03/2024
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool prime;
    int num, lwr, upr, div;
    printf("\nInput lower limit:");
    scanf("%d", &lwr);
    printf("\nInput upper limit:");
    scanf("%d", &upr);

    printf("Prime numbers between %d-%d are:\n\n", lwr, upr);
    for (num = lwr; num <= upr; num++)
    {
        prime = 1;
        for (div = 2; div < num; div++)
        {
            if ((num % div) == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime == 1)
        {
            printf("%d, ", num);
        }
    }
    return 0;
}