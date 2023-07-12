#include<stdio.h>


int main(int argc, char const *argv[])
{
    int vetor[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o elemento da posição %i : ", i);
        scanf("%i", &vetor[i]);

    }
    for (int i = 0; i < 5; i++)
    {
        if (vetor[i] % 2 == 0)
        {
            printf("\nO elementos %i que esta na posição %i : ", i, &vetor);
        }
        
    }
    
    
    return 0;
}
