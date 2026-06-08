//Write a program to print half pyramid pattern.
#include<stdio.h>
int main(){
    int side_length, i, j ;

    printf("Enter the side length of triangle : ");
    scanf("%d", &side_length);

    for( i=1; i<=side_length; i++ ){
        for( j=1; j<=i; j++ ){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}