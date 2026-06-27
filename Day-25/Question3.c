//Write a program to sort names alphabetically.
#include<stdio.h>
int main(){
    char name[5][20], temp ;
    int i, j, k;

    printf("Enter 5 names\n");
    for( i = 0; i < 5; i++ ){
        printf("Enter the name : ") ;
        scanf(" %[^\n]", name[i]) ;
    }
    
    for( i = 0; i < 5; i++ ){
        for( j = i + 1; j < 5; j++ ){
            k = 0 ;
            while( (name[i][k] == name[j][k]) && (name[i][k] != '\0') ){
                k++;
            }
            if( name[i][k] > name[j][k] ){
                for( k = 0; k < 20; k++ ){
                    temp = name[i][k] ;
                    name[i][k] = name[j][k] ;
                    name[j][k] = temp ;
                }
            }
        }
    }

    printf("\nNames in alphabetical order are :\n") ;
    for( i = 0; i < 5; i++ ){
        printf("%s\n", name[i]) ;
    }
    return 0 ;
}