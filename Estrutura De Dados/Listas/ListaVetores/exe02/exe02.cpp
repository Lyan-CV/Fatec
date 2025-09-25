#include <stdio.h>
#include <stdlib.h>

void main(){

    int nums[4], soma=0 ,i;

    for(i=0; i<5; i++){
        printf("\nDigite um numero: ");
        scanf("%d",&nums[i]);
        soma = soma + nums[i];
    }

    printf("\nSoma: %d", soma);

}