#include <stdio.h>
#include <stdlib.h>

void main(){
    float media, notas[4];
    int i;
    for (i = 0; i <4 ; i++)
    {
        printf("Digite a nota: ");
        scanf("%f", &notas[i]);
    }
    media = (notas[0]+notas[1]+notas[2]+notas[3])/sizeof(notas);

    printf("\nMédia: %2.0f", media);
    
}