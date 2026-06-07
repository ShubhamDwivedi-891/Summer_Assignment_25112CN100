//Write a program to Recursive sum of digits.
#include<stdio.h>
int sum_of_digits( int n ) ;
int main(){
    int num ;
    printf("Enter the number : ") ;
    scanf("%d", &num) ;

    printf("Sum of digits = %d", sum_of_digits( num )) ;
    return 0 ;
}

int sum_of_digits( int n ){
    if( n == 0 ){
        return 0 ;
    }
    else{
        return ( n % 10 ) + sum_of_digits( n / 10 ) ;
    }
}