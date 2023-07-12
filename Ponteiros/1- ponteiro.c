#include<stdio.h>
#include<stdlib.h>
#define TAM 6
void MaiorMenor(int vetor[], int *maior, int *menor)
{   
    
    for (int i = 0; i < TAM; i++)
    {
        if (vetor[i] < *menor)
        {
            *menor = vetor[i];
        }
        if (vetor[i] > *maior)
        {
            *maior = vetor[i];
        }
        
        
    }
    printf("Maior = %i\nMenor = %i", *maior, *menor);
    
}

int main(int argc, char const *argv[])
{
    int maior = -99999;
    int menor = 999999;

    int *Ptr_Maior = &maior;
    int *Ptr_menor = &menor;
    int vetor[TAM];

    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o ¨%i ª numero do vetor : ", i + 1);
        scanf("%i", &vetor[i]);

    }
    MaiorMenor(vetor, Ptr_Maior, Ptr_menor);

    return 0;
}
