#include <stdio.h>
#include <stdlib.h>

void main(){
    int vetor[5], menu =1,i;
    while (menu != 0)
    {
        printf("\n==========- Insercao de valor para um Vetor -========");
        for (i = 0; i < 5; i++)
        {
            printf("\nDigite um valor para o vetor: ");
            scanf("%d", &vetor[i]);

            if (vetor[i] == vetor[i+1] || vetor[i] == vetor[i-1])
            {
                printf("Valor repetido!");
                i -=1;
            }else{
                vetor[i] =vetor[i];
            }
            
        }        
        
        for (i = 0; i < 5; i++)
        {
            printf("%d",vetor[i]);    /* code */
        }
        
        printf("Deseja continuar? 1 = sim | 0 = nao\n");
        scanf("%d", &menu);

        if (menu == 0)
        {
            printf("Finalizando programa");
            menu = 0;
        }
        
        
            
    }
    
    

}