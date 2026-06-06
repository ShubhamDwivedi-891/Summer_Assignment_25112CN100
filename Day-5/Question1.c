//Write a program to check perfect number.
#include<stdio.h>
int main(){
    int num, sum = 1 ;
    printf("Enter the number : ") ;
    scanf("%d", &num) ;

    for( int i=2; i<=(num/2); i++){
        if( num  % i == 0){
            sum = sum + i ;
        }
    }

    if( sum == num){
        printf("Perfect Number");
    }
    else{
        printf("Not a perfect number");
    }
    return 0 ;
}