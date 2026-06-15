//Write a program to Rotate array right.
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

    printf("Enter number of steps of rotation : ") ;
    scanf("%d", &k) ;

    for( i=1; i<=k; i++ ){
        temp = B[n-1] ;
        for( j=n-1; j>=1; j-- ){
            B[j] = B[j-1] ;
        }
        B[0] = temp ;
    }

    printf("Rotated array is :\n") ;
    for( i=0; i<n; i++ ){
        printf("%d  ", B[i]) ;
    }

    return 0 ;

}