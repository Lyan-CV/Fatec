#include <stdio.h>

int main(){
    int x;
    float numeros[7];

    for (x = 0; x < 7; x++)
    {
        printf("\nInforme o %dº numero: ", x+1);
        scanf(" %f", &numeros[x]);
    }
    
    printf("\nExibindo os numeros armazenados\n");
    for (x = 0; x < 7; x++)
    {
        printf("\nº = %2.0f",x+1, numeros[x]);
    }
    return 0;

}