//Write a program to find string length without strlen().
#include<stdio.h>
int main()
{
    char string[20] ;
    int i = 0, length = 0 ;

    printf("Enter the string : ") ;
    scanf("%[^\n]", string) ;

    while( string[i] != '\0' ){
        length++ ;
        i++ ;
    }
    
    printf("Length of the string is %d", length) ;
    return 0 ;
   
}