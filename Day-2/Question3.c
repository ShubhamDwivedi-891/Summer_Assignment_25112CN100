//Write a program to find product of digits.
#include<stdio.h>
int main()
{
    int num, product = 1, r;

    printf("Enter the number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        r = num % 10; 
        product = product * r; 
        num = num / 10;      
    }
    
    printf("The product of digits of the given number is %d", product);
    return 0;
}