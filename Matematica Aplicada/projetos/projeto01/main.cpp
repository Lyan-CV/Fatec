#include <stdio.h>
#include <stdlib.h>

void main(){

    int i,j,menu=0, verificador,A[5],B[5], uniao[10], inter[5], A_menos_B[5], B_menos_A[5], difSimAB[10], tamanho_dif=0;
    //do-while para o vetor A
    do
    {
        //titulo
        printf("Valores Vetor A\n");

        //for para correr pelo vetor A
        for(i=0;i<5;i++){
            printf("\nDigite um numero para a lista: ");

            //Scanf para guardar o valor digitado pelo usuário no vetor
            scanf("%d", &A[i]);

            //if para ignorar o indice inicial para não softlockar o usuário no primeiro valor
            if (i>=1)
            {
                //For para verificar se o número digitado já existe no vetor
                for(verificador=0;verificador<5;verificador++){
                    //if para ele não verificar o mesmo valor e softlockar
                    if (i!=verificador)
                    {   
                        //if para mensagem de erro caso seja número igual
                        if (A[i] == A[verificador])
                        {
                            printf("Número presente no vetor!! Tente novamente");
                            i-=1;
                        }
                    }            
                
                }
            }

        menu+=1;
    }
    } while (menu==0);
    
    //do-while para os valores do vetor B

    do
    {
        //titulo
        printf("\n\nValores Vetor B\n");

        //for para correr pelo vetor A
        for(i=0;i<5;i++){
            printf("\nDigite um numero para a lista: ");

            //Scanf para guardar o valor digitado pelo usuário no vetor
            scanf("%d", &B[i]);

            //if para ignorar o indice inicial para não softlockar o usuário no primeiro valor
            if (i>=1)
            {
                //For para verificar se o número digitado já existe no vetor
                for(verificador=0;verificador<5;verificador++){
                    //if para ele não verificar o mesmo valor e softlockar
                    if (i!=verificador)
                    {   
                        //if para mensagem de erro caso seja número igual
                        if (B[i] == B[verificador])
                        {
                            printf("Número presente no vetor!! Tente novamente");
                            i-=1;
                        }
                    }            
                
                }
            }

        menu+=1;
    }
    } while (menu==1);

    //For para a união

    for (i = 0; i <5; i++)
    {
        uniao[i] = A[i];
        uniao[i+5] = B[i];
    }

    //for para intersecção A=B
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <5; i++)
        {
            if (A[i] == B[j])
            {
                inter[i] = A[i];
            }
            
        }
        
    }

    //For para A-B
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <5; i++)
        {
            if (A[i] != B[j])
            {
                A_menos_B[i] = A[i];
            }
            
        }
        
    }
    //for para B-A
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <5; i++)
        {
            if (B[i] != A[j])
            {
                B_menos_A[i] = B[i];
            }
            
        }
        
    }

    for (i = 0; i <5; i++)
    {
        if (difSimAB[i] != A[i] && difSimAB[i] != B[i])
        {
            difSimAB[i] = A[i];
            difSimAB[i+5] = B[i];
            tamanho_dif++;
        }
    }
    
    
    

//prints dos vetores
    printf("\n=- VETOR A -=\n");

    for (i = 0; i <5; i++)
    {
        
        printf("\nValor: %d", A[i]);    
    }
    
    printf("\n=- VETOR B -=\n");

    for (i = 0; i <5; i++)
    {
        
        printf("\nValor: %d", B[i]);    
    }

    printf("\n\n\nUniao entre A e B");
    for (i = 0; i <10; i++)
    {
        
        printf("\nValor: %d",uniao[i]);    
    }
    printf("\n=- DIferenca Simetrica -=\n");
    for (i = 0; i < tamanho_dif; i++)
    {
        printf("\nValor: %d",difSimAB[i]);
    }

    printf("\n=- A Menos B -=\n");
    for (i = 0; i < 5; i++)
    {
        printf("\nValor: %d",A_menos_B[i]);
    }
    printf("\n=- B Menos A -=\n");
    for (i = 0; i < 5; i++)
    {
        printf("\nValor: %d",B_menos_A[i]);
    }
    printf("\n=- Intersccao -=\n");
    for (i = 0; i < 5; i++)
    {
        printf("\nValor: %d",inter[i]);
    }
    
}