#include <stdio.h>
#include <locale.h>

using namespace std;

int main(){
    
    int presenca;
    float media;

    setlocale(LC_ALL, "Portuguese");

    printf("Informe a quantidade de presenca: ");
    scanf("%d", &presenca);

    printf("Informe a média: ");
    scanf("%f", &media);

    if (media >=7 && presenca >= 75){
        printf("aprovado");
    }else{
        printf("Reprovado");
    }

}

