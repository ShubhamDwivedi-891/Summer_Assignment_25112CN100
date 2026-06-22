//Write a program to find maximum frequency element.
#include <stdio.h>
int main(){
    int n ;
    printf("Enter the value of n : ") ;
    scanf("%d", &n) ;

    int A[n], i, j, max_freq = 0, freq, max_element ;

    for( i=0; i<n; i++ ){
        printf("Enter the element : ") ;
        scanf("%d", &A[i]) ;
    }

    for( i=0; i<n; i++ ){
        freq = 1 ;

        for( j=i+1; j<n; j++ ){
            if( A[i] == A[j] ){
                freq++;
            }
        }

        if( freq > max_freq ){
            max_freq = freq;
            max_element = A[i];
        }
    }

    printf("Maximum frequency element = %d\n", max_element);
    printf("Frequency = %d\n", max_freq);

    return 0;
}

    