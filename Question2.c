//Write a program to reverse a number.
#include<stdio.h>
int main()
{
    int num, rev = 0, r;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        r = num % 10; // Get the last digit
        rev = rev * 10 + r; // Append it to the reversed number
        num = num / 10; // Remove the last digit
    }
    
    printf("The reverse of the given number is %d", rev);
    return 0;
}