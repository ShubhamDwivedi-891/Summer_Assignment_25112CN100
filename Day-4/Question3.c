//Write a program to check Armstrong number.
#include<stdio.h>
#include<math.h>
int main(){
    int num, n1, count = 0, r, sum = 0 ;
    printf("Enter the number : ");
    scanf("%d", &num);
    
    n1 = num ;
    while( num != 0 ){
        num = num / 10 ;
        count ++ ;
    }
    
    num = n1 ;
    while( num != 0 ){
        r = num % 10 ;
        sum = sum + pow(r, count) ;
        num = num / 10 ;
    }

    if( sum == n1 ){
        printf("Armstrong number");
    }
    else{
        printf("Not an armstrong number");
    }
    return 0 ;
}