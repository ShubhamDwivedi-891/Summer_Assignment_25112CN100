//Write a program to write function for Armstrong.
#include<stdio.h>
#include<math.h>
void armstrong( int a ) ;
int main(){
    int x ;
    printf("Enter the number : " ) ;
    scanf("%d", &x) ;

    armstrong( x ) ;
    return 0 ;
}

void armstrong( int a ){
    int r , sum = 0 , count = 0 , n ;

    n = a ;
    while( a != 0 ){
    a = a / 10 ;
    count ++ ; 
    }

    a = n ;
    while( a != 0 ){
        r = a % 10 ;
        sum = sum + pow( r, count ) ;
        a = a / 10 ;
    }

    if( sum == n ){
        printf("Armstrong number") ;
    }
    else{
        printf("Not an arsmtrong number") ;
    }
}

