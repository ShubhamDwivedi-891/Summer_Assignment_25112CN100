//Write a program to count even and odd elements.
#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number of elements in array : ") ;
    scanf("%d", &n) ;

    int A[n], i, e_count = 0, o_count = 0 ;
    for( i=0; i<n; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &A[i]) ;
    }

    for( i=0; i<n; i++ ){
        printf("%d  ", A[i]) ;
    }
    printf("\n") ;

    for( i=0; i<n; i++ ){
        if( A[i] % 2 == 0 ){
            e_count ++ ;
        }
        else{
            o_count ++ ;
        }
    }

    printf("Number of even elements = %d\n", e_count) ; 
    printf("Number of odd elements = %d", o_count) ;
    return 0 ;
}