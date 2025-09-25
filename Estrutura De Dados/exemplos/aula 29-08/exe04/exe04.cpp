#include <stdio.h>
#include <stdlib.h>

int main(){

    float n1 =-1, n2=-1, n3=-1, n4=-1, media;
    char nome[40], resp = 's';
    
    while (resp == 's')
    {
        printf("\nInforme seu nome: ");
        fflush(stdin);
        gets_s(nome);
        while (n1 <0 || n1 >10)
        {
            printf("\nInforme a primeira nota: ");
            scanf("%f", &n1);
            if (n1 <0 || n1>10)
            {
                printf("Número invalido digite de 0 a 10");
            }
            
        }
        while (n2 <0 || n2 >10)
        {
            printf("\nInforme a segunda nota: ");
            scanf("%f", &n2);
            if (n2 <0 || n2>10)
            {
                printf("Número invalido digite de 0 a 10");
            }
            
        }
        while (n3 <0 || 32 >10)
        {
            printf("\nInforme a terceira nota: ");
            scanf("%f", &n3);
            if (n3 <0 || n3>10)
            {
                printf("Número invalido digite de 0 a 10");
            }
            
        }
        while (n3 <0 || 32 >10)
        {
            printf("\nInforme a quarta nota: ");
            scanf("%f", &n4);
            if (n4 <0 || n4>10)
            {
                printf("Número invalido digite de 0 a 10");
            }
            
        }

        media = (n1+n2+n3+n4)/4;

        printf("\nNome: %s\nMedia: %f", nome, media);

        while (resp != 'n' || resp != 'N' || resp != 'S' || resp != 's')
        {
            printf("\nDeseja calcular a media de outro aluno? [s/n]");
            fflush(stdin);
            scanf("%s", &resp);
            if (resp != 'n' || resp != 'N' || resp != 'S' || resp != 's')
            {
                printf("Resposta invalida, digite [s/n]");
            }
            
        }
        
        if (resp =='n' || resp == 'N')
        {
            resp = 'para';
        }
        
    }
    
}