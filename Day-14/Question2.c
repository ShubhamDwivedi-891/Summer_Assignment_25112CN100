//Write a program to Frequency of an element.
#include<stdio.h>
int main(){
    int n ;
    printf("Enter size of array : ") ;
    scanf("%d", &n) ;

    int B[n], i, key, freq = 0 ;
    for( i=0; i<n; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &B[i]) ;
    }

    for( i=0; i<n; i++ ){
        printf("%d  ", B[i]) ;
    }
    printf("\n") ;

    printf("Enter the element to find frequency : ") ;
    scanf("%d", &key) ;

    for( i=0; i<n; i++ ){
        if( key == B[i] ){
            freq ++ ;
        }
    }

    printf("Frequency of element is %d", freq) ;
    return 0 ;
}
