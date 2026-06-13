//Write a program to input and display array.
#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number of elements in array : ") ;
    scanf("%d", &n) ;

    int A[n], i ;
    for( i=0; i<n; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &A[i]) ;
    }

    for( i=0; i<n; i++ ){
        printf("%d  ", A[i]) ;
    }

    return 0 ;
    
}