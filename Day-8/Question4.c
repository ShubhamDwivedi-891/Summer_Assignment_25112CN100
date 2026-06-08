//Write a program to print repeated number pattern.
#include<stdio.h>
int main(){
    int height, i, j ;

    printf("Enter the height of triangle : ") ;
    scanf("%d", &height) ;

    for( i=1; i<=height; i++ ){
        for( j=1; j<=i; j++ ){
            printf("%d ", i) ;
        }
        printf("\n") ;
    }

    return 0 ;
}