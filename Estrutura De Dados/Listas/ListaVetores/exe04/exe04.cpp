#include <stdio.h>

void main(){
    float vetorA[5], vetorB[5], vetorC[5];
    int i, escolha;


    printf("Calculadora\n1= Soma\n2= Subtracao\n3= Multiplicacao\n4=Divisao\n");
    scanf("%d", &escolha);

    
    switch (escolha)
    {
    case 1:
        printf("numero 1: ");
        scanf("%f", &vetorA[0]);
        printf("numero 2: ");
        scanf("%f", &vetorB[0]);
        vetorC[0] = vetorA[0]+vetorB[0];
        printf("Resultado: %f", vetorC[3]);
        break;
    case 2: 
        printf("numero 1: ");
        scanf("%f", &vetorA[1]);
        printf("numero 2: ");
        scanf("%f", &vetorB[1]);
        vetorC[0] = vetorA[1]-vetorB[1];
        printf("Resultado: %f", vetorC[3]);
        break;
    case 3:
        printf("numero 1: ");
        scanf("%f", &vetorA[2]);
        printf("numero 2: ");
        scanf("%f", &vetorB[2]);
        vetorC[0] = vetorA[1]*vetorB[2];
        printf("Resultado: %f", vetorC[3]);
        break;
    case 4:
        printf("numero 1: ");
        scanf("%f", &vetorA[3]);
        printf("numero 2: ");
        scanf("%f", &vetorB[3]);
        vetorC[0] = vetorA[3]/vetorB[3];
        
        printf("Resultado: %f", vetorC[3]);

        break;
    default:
        break;
    }
}