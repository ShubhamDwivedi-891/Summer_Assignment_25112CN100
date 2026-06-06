//Write a program to convert decimal to binary.
#include<stdio.h>
int main()
{
    long long int decimal, binary = 0, i = 1 ;
    int r ;

    printf("Enter decimal number : ") ;
    scanf("%lld", &decimal) ;

    if( decimal == 0 ){
        printf("Binary Number = 0") ;
        return 0 ;
    }
    else{
    while( decimal > 0 ){
        r = decimal % 2 ;
        decimal = decimal / 2 ;
        binary = binary + (r * i) ;
        i = i * 10 ;

       }
    }
    printf("Binary Number = %lld", binary) ;
    return 0;
}
