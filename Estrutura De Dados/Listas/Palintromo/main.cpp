#include <stdio.h>
#include <string.h>

void main(){
    int valor;
    char palavra[15], inversa[15];

    printf("Digite uma palavra: ");
    gets_s(palavra);



    strcpy(inversa, palavra);




    printf("\nTestando a funcao strcpy : %s - %s", inversa, palavra);





    strrev(inversa);



    printf("\nTestando a funcao strrev : %s - %s", inversa, palavra);




    valor = strcmp(palavra, inversa);


    
    printf("\nTestando a funcao strcmp : %d",valor);

    if (valor==0)
        printf("\nA palavra %s e palindroma! ", palavra);
    else
        printf("\nA palavra %s nao e palindroma! ", palavra);
    


}