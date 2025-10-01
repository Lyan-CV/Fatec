#include <stdio.h>

void main(){
    int nums[5] = {0,0,0,0,0},maior_valor =0,i;

    for (i = 0; i <5; i++)
    {
        printf("\nDigite num numero: ");
        scanf("%d", &nums[i]);
        if (nums[i] <0)
        {
            printf("Digite um numero positivo");
            i = i -1;
        }else{
            if (nums[i] > maior_valor)
            {
                maior_valor == nums[i];
            }
        }
        
    }
    printf("\nMaior valor: %d", maior_valor);
    
}