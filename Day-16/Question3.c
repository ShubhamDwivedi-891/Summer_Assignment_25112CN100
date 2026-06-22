//Write a program to find pair with given sum.
#include <stdio.h>
int main(){
    int n ;
    printf("Enter the value of n : ") ;
    scanf("%d", &n) ;

    int A[n], i, j, sum ;

    for( i=0; i<n; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &A[i]) ;
    }

    printf("Enter the required sum : ");
    scanf("%d", &sum);

    printf("Pairs with given sum are :\n");

    for( i=0; i<n-1; i++){
        for( j=i+1; j<n; j++ ){
            if( A[i] + A[j] == sum ){
                printf("(%d, %d)\n", A[i], A[j]);
            }
        }
    }

    return 0;
}