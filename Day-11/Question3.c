//Write a program to write function to check prime.
#include<stdio.h>
void prime( int a ) ;
int main(){
    int x ;
    printf("Enter the number : ") ;
    scanf("%d", &x) ;

    prime( x ) ;
    return 0 ;
}

void prime( int a ){
    int i, count = 0 ;
    for( i=2; i<=(a/2); i++ ){
        if( a % i == 0 ){
            count ++ ;
        }
        
    }

    if( count == 0 ){
        printf("Prime number") ;

    }
    else{
        printf("Not a prime number") ;
    }

}
