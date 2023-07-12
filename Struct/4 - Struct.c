#include<stdio.h>
#define TAM 5

struct fichaPessoa
{
    char nome[60];
    char cpf[15];
    char email[60];
    int idade;
};

void fichaPessoafuncao(struct fichaPessoa *p)
{   
    printf("\t***ENTRADA DE DADOS DO USUARIO ! : \n");
    for (int i = 0; i < TAM; i++)
    {
        printf("Digite o nome da pessoa : ");
        scanf(" %[^\n]", p[i].nome);
        printf("Digite o email da pessoa : ");
        scanf(" %[^\n]", p[i].email);
        printf("Digite o CPF da pessoa : ");
        scanf(" %[^\n]", p[i].cpf);
        printf("Digite a idade da pessoa : ");
        scanf("%i", p[i].idade);
        printf("\n");
        printf("---------------------------------------------------");
        printf("\n");
    }
}
void dadosPessoafuncao(struct fichaPessoa *p)
{

    printf("\t***DADOS USUARIO***\n");
    for (int i = 0; i < TAM; i++)
    {
        printf("Nome do usuario %i : %s", i + 1, p[i].nome);
        printf("\nEmail do usuario %i : %s", i + 1, p[i].email);
        printf("\nCPF do usuario %i : %s", i + 1, p[i].cpf);
        printf("\nIdade do usuario %i : %i anos", i + 1, p[i].idade);
        printf("\n---------------------------------------------------");
        printf("\n");
    }
    
}
int main(int argc, char const *argv[])
{
    struct fichaPessoa p[TAM];
    fichaPessoafuncao(p);
    dadosPessoafuncao(p);

    return 0;
}
