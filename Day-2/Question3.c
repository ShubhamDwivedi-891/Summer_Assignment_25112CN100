//Write a program to find product of digits.
#include<stdio.h>
int main()
{
    int num, product = 1, r;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        r = num % 10; // Get the last digit
        product = product * r; // Multiply it to the product
        num = num / 10;      // Remove the last digit
    }
    
    printf("The product of digits of the given number is %d", product);
    return 0;
}