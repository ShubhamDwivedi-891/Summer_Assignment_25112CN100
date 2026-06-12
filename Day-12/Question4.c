//Write a program to write function for perfect number.
#include<stdio.h>
void perfect( int a ) ;
int main(){
    int x ;
    printf("Enter the number : ") ;
    scanf("%d", &x) ;

    perfect( x ) ;
    return 0 ;
}

void perfect( int a ){
    int i, sum = 0 ;
    for( i=1; i<=(a/2); i++ ){
        if( a % i == 0 ){
            sum = sum + i ;
        }
    }

    if( sum == a ){
        printf("Perfect number") ;
    }
    else("Not a perfect number") ;
}