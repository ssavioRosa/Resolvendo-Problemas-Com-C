#include<stdio.h>

void RecebeEconta(int vetor[], int *cont)
{  
    int i = 0;
    printf("Digite ate 50 numeros aleatorios !\nQuando quiser parar digite o numero 0\n");
    
    do
    {   *cont = i + 1;
        i++;
        scanf("%i", &vetor[i]);
    } while (vetor[i] != 0);

    printf("A quantidade de elementos lidos : %i", *cont - 1);
    printf("\n==============================================");
}
void vetorDigitado(int vetor[], int *cont)
{
    for (int i = 1; i < *cont; i++)
    {
        printf("\nElemento numero %i do vetor : %i ", i, vetor[i]);
    }
    
}

int main(int argc, char const *argv[])
{
    int vetor[50];
    int cont = 0;
    int *Ptr_cont = &cont;

    RecebeEconta(vetor, Ptr_cont);
    vetorDigitado(vetor, Ptr_cont);
    
    return 0;
}
