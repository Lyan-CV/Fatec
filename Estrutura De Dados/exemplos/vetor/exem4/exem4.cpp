#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    int i, contador_vogais = 0, contador_consoantes;
    char s[10];

    printf("\ninforme uma palavra ou frase: ");
    fflush(stdin);
    gets_s(s);

    for (i = 0; i < strlen(s); i++)
    {
        if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u'))
        {
            contador_vogais +=1;
            printf("%c: [Volgal1].", s[i]);
        }else{
                printf("%c: [Consoante]. ", s[i]);
        }
        
    }
    contador_consoantes = strlen(s) - contador_vogais;
    printf("\nTotal de Consoantes: %d\n",contador_consoantes);
    printf("\nTotal de Vogais: %d\n",contador_vogais);
    system("pause");
}