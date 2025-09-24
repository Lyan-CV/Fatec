#include <stdio.h>

int main(){

    int i,j,cont,chave=0, A[]={5,2,3,4,7}, B[]={9,3,5,8,1}, Int[5];
//5
    for (i = 0; i <5; i++)
    {
        cont=0;
        for (j = 0; j <5; j++)
        {
            if (A[i] == B[j])
            {
                chave=1;
            }
            
        }
        if (chave==1)
        {
            Int[cont] = A[i];
            cont+=1;
        }
        
        
    }
    for (i = 0; i <cont; i++)
    {
        printf("\n %d",Int[i]);
    }
    
    

    return 0;
}