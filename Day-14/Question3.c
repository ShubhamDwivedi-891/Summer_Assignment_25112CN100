//Write a program to Second largest element.
#include<stdio.h>
int main(){
    int n ;
    printf("Enter size of array : ") ;
    scanf("%d", &n) ;

    int B[n], i, max_1, max_2 ;
    for( i=0; i<n; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &B[i]) ;
    }

    for( i=0; i<n; i++ ){
        printf("%d  ", B[i]) ;
    }
    printf("\n") ;

    max_1 = B[0] ;
    for( i=1; i<n; i++ ){
        if( B[i] > max_1 ){
            max_1 = B[i] ;
        }
    }

    max_2 = B[0] ;
    for( i=1; i<n; i++ ){
        if( B[i] > max_2 && B[i] != max_1 ){
            max_2 = B[i] ;
        }
    }

    printf("Second largest element is %d", max_2) ;
    return 0 ;
}