//Write a program to write function to find factorial.
#include<stdio.h>
int factorial( int a ) ;
int main(){
    int x ;
    printf("Enter the number : ") ;
    scanf("%d", &x) ;

    printf("Factorial = %d", factorial( x )) ;
    return 0 ;
}

int factorial( int a ){
    int fact = 1, i ;
    for( i=a; i>=1; i-- ){
        fact = fact * i ;
    }

    return fact ;
}