#include <stdio.h>
#include <stdlib.h>

void main()
{

    char verificador1, verificador2, verificador3;
    printf("E mamifero?:  ");
    scanf("%s", &verificador1);

    printf("E quadrupede?:  ");
    scanf("%s", &verificador2);

    if (verificador2 == 's')
    {
        printf("E carnivoro?:  ");
        scanf("%s", &verificador3);

        if (verificador3 == 's')
        {
            printf("leao");
        }
        if (verificador3 == 'n')
        {
            printf("cavalo");
        }
    }
    if (verificador2 == 'n')
    {
        printf("e bipede?:  ");
        scanf("%s", &verificador2);

        if (verificador2 == 's')
        {
            printf("E onivoro?:  ");
            scanf("%s", &verificador3);

            if (verificador3 == 's')
            {
                printf("Homem");
            }
            if (verificador3 == 'n')
            {
                printf("Macaco");
            }
        } 
        if (verificador2 == 'n')
        {
            printf("e voador?");
            scanf("%s", &verificador3);

            if (verificador3 == 's')
            {
                printf("Morcego");
            }
            if (verificador3 == 'n')
            {
                printf("Baleia");
            }
        }
        
    }
}