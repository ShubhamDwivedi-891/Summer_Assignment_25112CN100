//Write a program to merge arrays.
#include <stdio.h>
int main(){
    int n1, n2 ;

    printf("Enter the number of elements in first array : ") ;
    scanf("%d", &n1);

    int A[n1], C[100], i ;

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

    for ( i=0; i<n1; i++ ){
        C[i] = A[i];
    }

    for ( i=0; i<n2; i++ ){
        C[n1 + i] = B[i] ;
    }

    printf("Merged array : ");
    for ( i=0; i<n1+n2; i++ ){
        printf("%d  ", C[i]);
    }

    return 0;
}