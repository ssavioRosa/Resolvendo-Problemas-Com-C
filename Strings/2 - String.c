#include<stdio.h>
#include<stdlib.h>

int quantasVezesAparece(char palavra[], char caract){

    int cont = 0;

    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (palavra[i] == caract)
        {
            cont++;
        }
        
    }
    return cont;

}

int main(int argc, char const *argv[])
{
    char palavra[100];
    char caractere;
    int returnCont = 0;

    printf("Digite uma palavra : ");
    scanf(" %[^\n]", palavra);

    printf("Digite um caractere que deseja saber quantas vezes aparece : ");
    scanf(" %c", &caractere);

    returnCont = quantasVezesAparece(palavra, caractere);
    if (returnCont <= 0)
    {
        printf("----------------------------------------------------------\n");
        printf("O caractera '%c' não aparece na string '%s'", caractere, palavra);
        printf("\n----------------------------------------------------------");
    }
    else
    {
        printf("--------------------------------------------------\n");
        printf("O caractere '%c' aparece %i vez(es) ",caractere, returnCont);
        printf("\n--------------------------------------------------");

    }
    
    return 0;
}
