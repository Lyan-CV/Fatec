#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    float number1;

    do{
        printf("\nInput an number between [0...10]: ");
        scanf("%f", &number1);
        if((number1 <0) || (number1>10)){
            printf("\nInvalid number");
            system("pause");
            system("cls");
        }else{
            printf("\nValid Number!\n");
        }
    }while((number1<0) || (number1>10));
}