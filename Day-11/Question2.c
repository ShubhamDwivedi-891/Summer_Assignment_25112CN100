//Write a program to write function to find maximum.
#include<stdio.h>
int maximum( int a, int b ) ;
int main(){
    int x, y ;
    printf("Enter two number : ") ;
    scanf("%d%d", &x, &y) ;

    printf("Maximum = %d", maximum( x, y )) ;
    return 0 ;
}

int maximum( int a, int b ){
    int max ;
    if( a > b ){
        max = a ;
    }
    else{
        max = b ;
    }

    return max ;
}