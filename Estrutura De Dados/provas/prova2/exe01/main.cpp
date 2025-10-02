#include <stdio.h>
#include <stdlib.h>

void main(){

    char sexo[10], cor_olhos[10], cor_cabelos[10];
    int idade[10],i, maior_idade=0, quantidade_indi=0;

    for (i = 1; i <10; i++)
    {
        printf("Digite a idade do %d habitante: ",i);
        scanf("%d", &idade[i]);

        if (idade[i] <=0)
        {
            i+=100;
        }
        if (idade[i] > maior_idade)
        {
            maior_idade = idade[i];
        }
        

        printf("Digite a cor dos olhos do %d habitante: ", i);
        scanf("%s", &cor_olhos[i]);

        printf("Digite a cor dos cabelos do %d habitante: ", i);
        scanf("%s", &cor_cabelos[i]);

        printf("Qual o sexo do %d habitante? ", i);
        scanf("%s", &sexo[i]);

        if (idade[i]>=18 || idade[i] <=35)
        {
            if (sexo[i] == 'F')
            {
                if (cor_cabelos[i] == 'L' && cor_olhos[i]== 'V')
                {
                    quantidade_indi++;
                }
                
            }
            
        }
        
    }
            
    printf("\nA maior idade: %d", maior_idade);
    printf("\nA quantidade de mulheres maiores de idade, loiras e de olhos verdes: %d", quantidade_indi);

}