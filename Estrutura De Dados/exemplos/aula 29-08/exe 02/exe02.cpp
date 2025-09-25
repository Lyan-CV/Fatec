#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1, n2, n3, n4, media;
    char nome[40], resp = 's';
    
    while (resp == 's')
    {
        printf("\nInforme seu nome: ");
        fflush(stdin);
        gets_s(nome);
        printf("\nInforme a primeira nota: ");
        scanf("%f", &n1);
        printf("\nInforme a segunda nota: ");
        scanf("%f", &n2);
        printf("\nInforme a terceira nota: ");
        scanf("%f", &n3);
        printf("\nInforme a quarta nota: ");
        scanf("%f", &n4);

        media = (n1+n2+n3+n4)/4;

        printf("\nNome: %s\nMedia: %f", nome, media);
        
        printf("\nDeseja calcular a media de outro aluno? [s/n]");
        fflush(stdin);
        scanf("%s", &resp);

        if (resp =='n' || resp == 'N')
        {
            resp = 'para';
        }
        
    }
    
}