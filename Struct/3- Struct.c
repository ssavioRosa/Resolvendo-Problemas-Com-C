#include<stdio.h>
#define TAMCADASTROS 2

struct fichaPessoa
{
    char nome[100];
    char email[30];
    char cpf[15];  
};
void entradaDados(struct fichaPessoa *p)
{
    printf("\t***ENTRADA DE DADOS***\n");
    for (int i = 0; i < TAMCADASTROS; i++)
    {
        printf("Digite o dado da pessoa %i", i + 1);
        printf("\nDigite o nome : ");
        scanf(" %[^\n]", p[i].nome);
        printf("Digite o email :  ");
        scanf(" %[^\n]", p[i].email);
        printf("Digite o CPF no formato '***.***.***-**' : ");
        scanf(" %[^\n]", p[i].cpf);
    } 

}
void apresentacaoDados(struct fichaPessoa *p)
{
    for (int i = 0; i < TAMCADASTROS; i++)
    {
        printf("\nDados do usuario %i", i + 1);
        printf("\nNome usuario :\n %s", p[i].nome);
        printf("\nEmail usuario :\n %s", p[i].email);
        printf("\nCPF do usuario :\n %s", p[i].cpf);
        printf("\n-------------------------------------------\n");
    }
    
}


int main(int argc, char const *argv[])
{
    struct fichaPessoa p[TAMCADASTROS];

entradaDados(p);
apresentacaoDados(p);


    
    
    return 0;
}
