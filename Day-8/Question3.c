//Write a program to print character triangle.
#include<stdio.h>
int main(){
    int height, i, j ;
    char ch = 'A';

    printf("Enter the height of triangle : ") ;
    scanf("%d", &height) ;

    for( i=1; i<=height; i++ ){
        for( j=1; j<=i; j++ ){
            printf("%c ", ch) ;
            ch ++ ;
            
        }
        ch = 'A' ;
        printf("\n") ;
    }
    
    return 0 ;
}