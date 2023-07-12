#include<stdio.h>
#include<string.h>
#include<ctype.h>

int quantasLetrass(char str[])
{
    int total=0;

    while( str[total] != '\0')
        total++;

    return total;
}
int quantasVogais(char string[])
{
    int contVogal = 0;

    for (int i = 0; i < 10; i++)
    {
        if (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U' || string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            contVogal++;
        }
        
    }
    return contVogal;
}
int quantasConsoantes(char string[])
{
    int contConsoante = 0;
    for (int i = 0; i < 10; i++)
    {
         if (string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U' || string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            
        }
        else
        {
            contConsoante++;
        }
        
    }

    return contConsoante;

}

int main(int argc, char const *argv[])
{
    char string[10];
    int quantasVogaiss = 0;
    char temvogal[3];
    int quantasConsoantess = 0;
    int totalLetras = 0;
    
    printf("Digite a palavra : ");
    scanf(" %s", string);
    quantasVogaiss = quantasVogais(string);
    quantasConsoantess = quantasConsoantes(string);
    totalLetras = quantasLetrass(string);
    quantasConsoantess = totalLetras - quantasVogaiss;

    printf("\nTem um total de %i consoantes na string ! ", quantasConsoantess);
    printf("\nTem um total de %i vogais na string ! ", quantasVogaiss);


    return 0;
}