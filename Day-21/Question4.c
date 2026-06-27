//Write a program to convert lowercase to uppercase.
#include <stdio.h>
int main(){
    char string[100] ;
    int i = 0 ;

    printf("Enter a string : ") ;
    scanf("%[^\n]", string) ;
       
    while( string[i] != '\0' ){
        if( string[i] >= 'a' && string[i] <= 'z' ){
            string[i] = string[i] - 32 ; 
        }
        i++;
        
    }

    printf("Uppercase: %s", string) ; 
    return 0 ;
}