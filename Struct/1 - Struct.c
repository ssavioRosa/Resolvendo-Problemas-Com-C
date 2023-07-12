#include<stdio.h>
#include<locale.h>



struct depositos
{
    char dataDeposito[10];
    float valor;
    char clientedepositante[60];
    char clientefavorecido[60];
};

struct banco
{
    char nome[60];
    char dataNascimento[10];
    char numeroDaagencia[5];
    char numeroDaconta[7];
    struct depositos Depositos;
};

void lerStructs(struct banco *p)
{
    
    printf("\t***NOME DO CLIENTE***\n");
    printf("Digite o nome do cliente : ");
    scanf(" %[^\n]", p->nome);

    printf("\n\t***DATA DE NASCIMENTO***\n");
    printf("Digite a data de nascimento do cliente no formato 'DD/MM/AAA' : ");
    scanf(" %[^\n]", p->dataNascimento);

    printf("\t***NUMERO DA AGENCIA***\n");
    printf("Digite o numero da agencia no formato '***-*' : ");
    scanf(" %[^\n]", p->numeroDaagencia);

    printf("\t***NUMERO DA CONTA***\n");
    printf("Digite o numero da conta no formato '*****-*");
    scanf(" %[^\n]", p->numeroDaconta);
    printf("\t\n***DADOS DO DEPOSITO***\n");
    printf("Digite o dia do deposito :  ");
    scanf(" %[^\n]", p->Depositos.dataDeposito);
    printf("\nDigite o valor do deposito : ");
    scanf("%f", &p->Depositos.valor);
    printf("\nDigite o Cliente Depositante : ");
    scanf(" %[^\n]", p->Depositos.clientedepositante);

    }

void printaDadosBanco(struct banco *p)
{
    printf("\n\n\n");
        printf("\t***DADOS DO CLIENTE***\n");
    printf("Nome do Cliente :\n %s", p->nome);
    printf("\nData de nascimento :\n %s", p->dataNascimento);
    printf("\nNumero da agencia do Cliente :\n %s", p->numeroDaagencia);
    printf("\nNumero da conta do Cliente :\n %s", p->numeroDaconta);
    printf("\n\t***DADOS DO DEPOSITO***\n");
    printf("Data do deposito :\n %s", p->Depositos.dataDeposito);
    printf("\nValor do deposito :\n R$ %.2f", p->Depositos.valor);
    printf("\nCliente depositante :\n %s", p->Depositos.clientedepositante);

}

int main(int argc, char const *argv[])
{
    

    struct banco p;
    struct banco *pPtr = &p;
  


lerStructs(pPtr);
printaDadosBanco(pPtr);

    return 0;
}
