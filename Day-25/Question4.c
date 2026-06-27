//Write a program to sort words by length.
#include<stdio.h>
int main(){
    char word[5][20], temp ;
    int length[5] = {0} ;
    int i, j, k, t ;

    printf("Enter 5 words\n") ;
    for( i = 0; i < 5; i++ ){
        printf("Enter the name : ") ;
        scanf(" %[^\n]", word[i]) ;

        while( word[i][length[i]] != '\0' )
            length[i]++ ;
    }

    for( i = 0; i < 5; i++ ){
        for( j = i + 1; j < 5; j++ ){
            if( length[i] > length[j] ){
                t = length[i] ;
                length[i] = length[j] ;
                length[j] = t ;

                for( k = 0; k < 20; k++ ){
                    temp = word[i][k] ;
                    word[i][k] = word[j][k] ;
                    word[j][k] = temp ;
                }
            }
        }
    }

    printf("\nWords sorted by length are \n");

    for( i = 0; i < 5; i++ ){
        printf("%s\n", word[i]) ;
    }

    return 0;
}