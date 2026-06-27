//Write a program to remove duplicate characters.
#include <stdio.h>
int main(){
    char string[100] ;
    int i, j ;

    printf("Enter a string : ") ;
    scanf("%s", string) ;

    for( i = 0; string[i] != '\0'; i++ ){
        for( j = i + 1; string[j] != '\0'; ){
            if( string[i] == string[j] ){
                int k = j ;
                while( string[k] != '\0' ){
                    string[k] = string[k + 1] ;
                    k++ ;
                }
            } else {
                j++ ;
            }
        }
    }

    printf("String after removing duplicates: %s", string) ;
    return 0;
}