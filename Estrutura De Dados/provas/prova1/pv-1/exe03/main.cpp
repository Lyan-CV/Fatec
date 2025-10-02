#include <stdio.h>
#include <stdlib.h>
//Dupla: Lyan Carvalho Viana e Gabrielli

void main(){

    int menu=1,i;
    float dias_semana[8],media_temp=0, temperatura, maior_temp=0, menor_temp=99999;

    do
    {
        for (i = 1; i <8; i++)
        {
            printf("\nDigite a temperatura do dia %d :", i);
            scanf("%f", &dias_semana[i]);

            if (dias_semana[i]<-95 || dias_semana[i]>65)
            {
                printf("\nTemeperatura fora dos limites! Tente novamente\n");
                i--;
            }else{
                if (dias_semana[i] > maior_temp)
                {
                    maior_temp=dias_semana[i];
                }else if (dias_semana[i]<menor_temp)
                {
                    menor_temp=dias_semana[i];
                }
                media_temp += dias_semana[i];
                
                
            }
            menu--;
            

        }
        
        
    } while (menu==1);

    printf("\nMenor Temperatura: %.0f", menor_temp);
    printf("\nMaior Temperatura: %.0f", maior_temp);
    printf("\nMedia de temperatura: %.0f", media_temp/7);

}