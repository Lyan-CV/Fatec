#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(){
    int i, achou=0;
    char esportes[5][15] = {"futebol", "volei", "basquete", "tenis", "ciclismo"};
    char busca[50];

    printf("Digite um esporte para busca: ");
    fflush(stdin);
    gets_s(busca);

    for (i = 0; i < 5; i++)
    {
        if (strcmp(busca, esportes[i]) == 0)
        {
            printf("Escontrado: ", esportes[i]);
            achou=1;
        }
        if (achou==0)
        {
            printf("%s nao encontrado!",busca);
        }
        
        
    }
    
}