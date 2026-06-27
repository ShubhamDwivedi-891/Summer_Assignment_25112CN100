//Write a program to check palindrome string.
#include<stdio.h>
int main()
{
    char string[100], rev[100] ;
    int i = 0, length = 0, count = 1 ;

    printf("Enter the string : ") ;
    scanf("%[^\n]", string) ;

    while( string[i] != '\0' ){
        length++ ;
        i++ ;
    }
    
   for( i = 0; i < length; i++ ){
        rev[i] = string[length - 1 - i] ;
    }
    rev[i] = '\0' ;

   for( i = 0; i < length; i++ ){
        if( string[i] != string[length - 1 - i] ){
            count = 0;
            break;
        }
    }

    if ( count == 1 )
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
   
