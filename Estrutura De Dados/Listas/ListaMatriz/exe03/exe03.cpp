#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#define tamanho 5
void main(){

    int x;
    char nomes[tamanho][20];
    float salarios[tamanho],reajuste;

    for (x = 0; x < tamanho; x++)
    {
        printf("\nNome do funcionario %dº: ", x+1);
        fflush(stdin);
        gets_s(nomes[x]);
        printf("\nSalario: ");
        scanf("%f", &salarios[x]);
    }

    printf("\nDigite o valor do reajuste salarial: ");
    scanf("%f", &reajuste);

    reajuste = (reajuste/100) +1;
    
    printf("\nCalculando e Listando todos os dados!\n");

    for (x = 0; x < tamanho; x++)
    {
        salarios[x] = salarios[x] *reajuste;
        printf("\nFuncionario : %s - R$ %.2f", nomes[x], salarios[x]);
    }

}