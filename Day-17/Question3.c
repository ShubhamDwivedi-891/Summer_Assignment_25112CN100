//Write a program to intersection of arrays.
#include <stdio.h>
int main(){
    int n1, n2 ;

    printf("Enter the number of elements in first array : ") ;
    scanf("%d", &n1);

    int A[n1], i, j ;

    for( i=0; i<n1; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &A[i]) ;
    }

    printf("Enter the number of elements in second array : ") ;
    scanf("%d", &n2);
    
    int B[n2] ;
    for( i=0; i<n2; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &B[i]) ;
    }

    printf("Intersection of arrays : ");
    for ( i=0; i<n1; i++ ){
        for ( j=0; j<n2; j++ ){
            if ( A[i] == B[j] ){
                printf("%d  ", A[i]) ;
                break ;
            }
        }
    }

    return 0 ;
}