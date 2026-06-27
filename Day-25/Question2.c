//Write a program to find common characters in strings.
#include<stdio.h>
int main() {
    char string1[100], string2[100] ;
    int i, j ;

    printf("Enter first string : ") ;
    scanf("%[^\n]", string1) ;

    printf("Enter second string : ") ;
    scanf(" %[^\n]", string2) ;
 
    printf("Common characters are : ") ;

    for( i = 0; string1[i] != '\0'; i++ ){
        for( j = 0; string2[j] != '\0'; j++ ){
            if( string1[i] == string2[j] ){
                printf("%c ", string1[i]) ;
                break;
            }
        }
    }

    return 0 ;
}