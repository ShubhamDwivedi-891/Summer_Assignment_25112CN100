//Write a program to find duplicates in array.
#include<stdio.h>
int main(){
    int n ;
    printf("Enter size of array : ") ;
    scanf("%d", &n) ;

    int B[n], i, j, k, temp ;
    for( i=0; i<n; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &B[i]) ;
    }

    for( i=0; i<n; i++ ){
        printf("%d  ", B[i]) ;
    }
    printf("\n") ;

    printf("Duplicate elements are : ");
    for( i=0; i<n; i++ ){
        for( j=i+1; j<n; j++ ) {
            if( B[i] == B[j] ){
                printf("%d  ", B[i]) ;
                break ;
            }
        }
    }
    return 0 ;
}