#include <stdio.h>
#include <stdlib.h>

int main(){
    char resposta;
    do{
        printf("\nType a letter: ");
        scanf("%c", &resposta);
        if((resposta == 'S') && (resposta == 'N')){
            printf("\nValid letter");
        }
        else{
            printf("\nInvalid letter");
            system("cls");
        }
    }while ((resposta != 'S') && (resposta != 'N'));
    
}