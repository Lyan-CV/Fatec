#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char nome[40];

    printf("informe seu nome completo: ");

    gets_s(nome); //armazena na memória tudo que for digitadado

    //scanf - %c = armazena um caractere
    //scanf - %s = armazena uma palavra

    fflush(stdin); //limpa o buffer do teclado

    printf("O Nome informado: %s", nome);

}