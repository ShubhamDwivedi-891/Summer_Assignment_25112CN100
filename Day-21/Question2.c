//Write a program to Reverse a string.
#include<stdio.h>
int main()
{
    char string[20] ;
    int i = 0, length = 0, temp ;

    printf("Enter the string : ") ;
    scanf("%[^\n]", string) ;

    while( string[i] != '\0' ){
        length++ ;
        i++ ;
    }
    
    for (i = 0; i < length / 2; i++) {
        temp = string[i] ;
        string[i] = string[length - 1 - i] ;
        string[length - 1 - i] = temp ;
    }

    printf("Reversed string: %s", string);
    return 0 ;
   
}