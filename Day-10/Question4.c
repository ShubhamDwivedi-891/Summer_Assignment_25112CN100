//Write a program to print character pyramid.
#include<stdio.h>
int main(){
    int n, i, j ;
    char ch = 'A' ;
    printf("Enter the height of pyramid : ") ;
    scanf("%d", &n) ;

    for( i=1; i<=n; i++ ){
        for( j=1; j<=n-i; j++ ){
            printf("  ") ;

        }
        
        
        for( j=1; j<=i; j++  ){
            printf("%c", ch) ;
            printf(" ") ;
            ch ++ ;
        
        }
        
        ch = ch - 2 ;
        for( j=1; j<=i-1; j++ ){
            printf("%c", ch) ;
            printf(" ") ;
            ch -- ;
        }
        printf("\n") ;
        ch = 'A' ;
    }
    return 0 ;
}   