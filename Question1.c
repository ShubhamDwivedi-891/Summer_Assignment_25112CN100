//Write a program to find sum of digits of a number.
#include<stdio.h>
int main()
{
    int num, sum = 0, r;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        r = num % 10; // Get the last digit
        sum = sum + r;     // Add it to the sum
        num = num / 10;      // Remove the last digit
    }

    printf("The sum of digits of the given number is %d", sum);
    return 0;
}