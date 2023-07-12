#include<stdio.h>
#define TAM_CIDADE 3

struct coletaDados
{
    int idade;
    char sexo;
    float salario;
    int numero_De_filhos; 
};

void recebeDados(struct coletaDados *p)
{
    for (int i = 0; i < TAM_CIDADE; i++)
    {
    
        printf("\t***COLETA DE DADOS***\n");
    printf("Digite a idade : ");
    scanf("%i", &p[i].idade);
    printf("\nDigite o sexo [M] - Masculino | [F] - Feminino :  ");
    scanf(" %c", &p[i].sexo);
    printf("\nDigite o salario : ");
    scanf("%f", &p[i].salario);
    printf("\nDigite o numero de filhos : ");
    scanf("%i", &p[i].numero_De_filhos);
    }
}


void apresentaDados(struct coletaDados *p)
{   printf("\n\t***DADOS***\n");
    for (int i = 0; i < TAM_CIDADE; i++)
    {
        printf("\n\tDados pessoa %i", i + 1);
        printf("\nIdade : %i", p[i].idade);
        printf("\nSexo : %c", p[i].sexo);
        printf("\nSalario : R$ %.2f",  p[i].salario);
        printf("\nNumero de filhos : %i", p[i].numero_De_filhos);
        printf("\n----------------------------------------------------------------------\n");
    
    }

}
float mediaSalario(struct coletaDados *p)
{

    float soma = 0;
    float media = 0;
    for (int i = 0; i < 2; i++)
    {
        soma += p[i].salario;

    }
    media = soma / TAM_CIDADE;

    return media;
}


int main(int argc, char const *argv[])
{
    struct coletaDados p[TAM_CIDADE];
    struct coletaDados *pPtr = &p;
    float media = 0.0;

    recebeDados(p);
    apresentaDados(p);
    media = mediaSalario(p);

    printf("\n\nA media do salario da cidade : R$ %.2f", media);


    return 0;
}