//Write a program to write function to find sum of two numbers.
#include<stdio.h>
int sum( int a, int b ) ;
int main(){
    int x, y ;
    printf("Enter two numbers : ") ;
    scanf("%d%d", &x, &y) ;

    printf("Sum of two numbers = %d", sum( x, y)) ;
    return 0 ;
    
}

int sum( int a, int b ){
    int sum = a + b ;
    return sum ;
    
}