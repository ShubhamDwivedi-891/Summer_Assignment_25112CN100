//Write a program to count set bits in a number.
#include<stdio.h>
int main(){
    long long int num, binary = 0, i = 1, count = 0 ;
    int r ;
    
    printf("Enter the number : ") ;
    scanf("%lld", &num) ;

    if( num == 0 ){
        printf("Set Bits = 0") ;
        return 0 ;
    }
    else{
    while( num > 0 ){
        r = num % 2 ;
        num = num / 2 ;
        binary = binary + (r * i) ;
        i = i * 10 ;

       }
    }
    r = 0 ;
    while( binary != 0 ){
        r = binary % 10 ;
        if( r == 1 ){
            count ++ ;
        }
        binary = binary / 10 ;
    }

    printf("Set Bits = %d", count) ;
    
    return 0;
}