//Write a program to Bubble Sort.
#include<stdio.h>
int main(){
    int n ;
    printf("Enter the number of elements in array : ") ;
    scanf("%d", &n) ;

    int A[n], i, j, temp ;
    for( i=0; i<n; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &A[i]) ;
    }
    for( i=1; i<n; i++ ){
        for( j=0; j<n; j++ ){
        if( A[j] > A[j+1] ){
            temp = A[j] ;
            A[j] = A[j+1] ;
            A[j+1] = temp ;
        }
    }
}
    printf("Sorted Array : \n");
    for( i=0; i<n; i++){
        printf("%d  ", A[i]);

    }
    return 0;
}