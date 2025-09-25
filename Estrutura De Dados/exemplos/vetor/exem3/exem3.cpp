#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int i, contador_vogais = 0;
    char s[10];

    printf("\ninforme uma palavra ou frase: ");
    fflush(stdin);
    gets_s(s);

    for (i = 0; i < strlen(s); i++)
    {
        if ((s[i] == 'a') || (s[i] == 'e') || (s[i] == 'i') || (s[i] == 'o') || (s[i] == 'u'))
        {
            contador_vogais +=1;
            printf("%c", s[i]);
        }
        
    }

    printf("\nTotal de Vogais: %d\n",contador_vogais);
    system("pause");
    return 0;
    

}