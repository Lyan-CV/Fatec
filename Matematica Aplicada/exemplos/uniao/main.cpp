#include <stdio.h>

int main(){

    int i,A[5]={2,7,-12,6,5}, B[5]={7,9,3,2,-12}, U[10];

    for (i = 0; i <5; i++)
    {
        U[i] = A[i];
        U[i+5] = B[i];
    }
    
    for (i = 0; i <10; i++)
    {
        printf("\n %d", U[i]);
    }
    
    return 0;
}