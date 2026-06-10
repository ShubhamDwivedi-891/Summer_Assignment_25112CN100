//Write a program to print reverse pyramid.
#include<stdio.h>
int main(){
    int n, i, j ;
    printf("Enter the altitude of pyramid : ") ;
    scanf("%d", &n) ;

    for( i=1; i<=n; i++ ){
        for( j=1; j<=i-1; j++ ){
            printf("  ") ;
        }

        for( j=1; j<=n-i+1; j++ ){
           printf("* ");
        }

        for( j=1; j<=n-i; j++ ){
           printf("* ") ;

        }

       printf("\n") ;
    }
    return 0 ;
}