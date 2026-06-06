//Write a program to convert binary to decimal.
#include<stdio.h>
#include<math.h>
int main(){
    long long int binary, decimal = 0, i = 0 ;
    int r ;

    printf("Enter binary number : ") ;
    scanf("%lld", &binary) ;
        
    while( binary > 0 ){
        r = binary % 10 ;
        binary = binary / 10 ;
        decimal = decimal + r * pow(2, i);
        i = i + 1 ;
    }
    
    printf("Decimal Number = %lld", decimal);
    return 0 ;
}