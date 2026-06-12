//Write a program to write function for palindrome.
#include<stdio.h>
void palindrome( int a ) ;
int main(){
    int x ;
    printf("Enter the number : " ) ;
    scanf("%d", &x) ;

    palindrome( x ) ;
    return 0 ;
}

void palindrome( int a ){
    int r, rev = 0, n ;

    n = a ;
    while( a != 0 ){
    r = a % 10 ;
    rev = rev * 10 + r ;
    a = a / 10 ; 
    }

    if( rev == n ){
        printf("Palindrome number") ;
    }
    else{
        printf("Not a palindrome number") ;
    }
}





