//Write a program to check whether a number is palindrome.
#include<stdio.h> 
int main()
{
    int num, rev = 0, r, n1 ;
    
    printf("Enter the number : ");
    scanf("%d", &num);

    n1 = num;
    while(num>0){
        r = num % 10;
        rev = rev*10 + r;
        num/=10;
    
    }

    printf("Reverse = %d\n", rev);

    if(rev == n1){
        printf("Number is pallindrome");
    }
    else{
        printf("Number is not pallindrome");
    }
    return 0;
}