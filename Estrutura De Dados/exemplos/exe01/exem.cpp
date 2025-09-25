#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<locale.h>

int main(){
    setlocale(LC_ALL, "portuguese");  

    int valor;
    int escolha;
    float z;
    int valor2;

    wprintf(L"========================\nDigite o calculo desejado: \n1 = Calculo de Raiz Quadrada\n2 = Calculo de Potencialização \n3 = Calculo para Seno\n4 = Calculo para Logaritmo\n0 = Sair\n=====================\n");
    scanf("%d", &escolha);
    wprintf(L"========================\n");
    switch (escolha)
    {
    case 1:
        wprintf(L" ################ Cálculo para Raiz Quadrada ##############");
        wprintf(L"\nDigite o Valor para cálculo da Raiz Quadrada: ");
        scanf("%d",&valor);
        z = sqrt(valor);
        wprintf(L"\nA Raiz Quadrada do valor %d é: %.2f\n",valor,z);
        system("pause");
        break;
    case 2:
        wprintf(L"################ Cálculo para Potencilização ##############");
        wprintf(L"\nDigite o Valor para cálculo da Potência: ");
        scanf("%d",&valor);
        wprintf(L"\nDigite o valor do expoente: ");
        scanf("%d", &valor2);
        z = pow(valor,valor2);
        wprintf(L"\nA Potênia do valor %d com Expoente %d é: %.2f\n",valor, valor2,z);
        system("pause");
        break;
    case 3:
        wprintf(L"################ Cálculo para Seno ##############");
        wprintf(L"\nDigite o Valor para cálculo do Seno: ");
        scanf("%d",&valor);
        z = sin(valor);
        wprintf(L"\no Seno do valor %d é: %.2f\n",valor,z);
        system("pause");
        break;
    case 4:
        wprintf(L"################ Cálculo para Logaritmo ##############");
        wprintf(L"\nDigite o Valor para cálculo do Logaritmo: ");
        scanf("%d",&valor);
        z = log(valor);
        wprintf(L"\nO Logaritmo do valor %d é: %.2f\n",valor,z);
        system("pause");
        break;
    case 0:
        wprintf(L"\nFinalizando o Programa!!");
        break;
    default:
        break;
    }

}

