#include <stdio.h>
#include <locale.h>

using namespace std;

int main(){
    
    int idade;

    setlocale(LC_ALL, "Portuguese");

    printf("Informe a idade");
    scanf("%d", &idade);


    if ((idade <=10) || (idade >= 60)){
        printf("pode vacinar");
    }else{
        printf("não pode vacinar");
    }

}

