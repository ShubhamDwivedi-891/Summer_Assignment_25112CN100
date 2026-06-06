//Write a program to find largest prime factor.
#include<stdio.h>
int main(){
    int num, i, j, count = 0, prime_factor, k ;
    
    printf("Enter the number : ") ;
    scanf("%d", &num) ;
    for( i=1; i<=(num/2); i++ ){
        if( num % i == 0 ){
            for( j=2; j<=(i/2); j++ ){
                if( i % j == 0 ){
                    count ++ ;
                    
                }
                  
            } 
            if( count == 0 ){
                prime_factor = i ;
            }
        }
        count = 0 ;
    }
    for( k=2; k<=(num/2); k++ ){
        if( num % k == 0 ){
            count ++ ;
        }
    }
    if( count == 0 ){
        if( num > prime_factor ){
            printf("Largest prime factor = %d", num) ;
        }
        else{
            printf("Largest prime factor = %d", prime_factor) ;
        }
    }
    else{
        printf("Largest prime factor = %d", prime_factor) ;
    }
    return 0 ;



}