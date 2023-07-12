#include<stdio.h>

struct itens
{
    int pediddo;
};

void fazerPedido(struct itens *p, int *num)
{
    
    printf("[1] - cachorro quente\n[2] - pizza\n[3] - Hamburguer\n");
    for (int i = 0; i < *num; i++)
    {
        printf("Digite sua escolha : ");
        scanf("%i", &p[i].pediddo);
    }
}
void apresentaEremove(struct itens *p, int *num)
{   int remover;
    int numeroPedidoRemove;
    printf("PEDIDOS\n");
    for (int i = 0; i < *num; i++)
    {
        printf("\n%iª pedido :  %i", i + 1, p[i].pediddo);
    }
    printf("\nDeseja remover algum pedido ? ");
    scanf("%i", &remover);
    if (remover == 1)
    {
        printf("Digite qual o pedido que deseja remover : ");
        scanf("%i", &numeroPedidoRemove);
       
        printf("Voce deseja remover o pedido %i : ", p[numeroPedidoRemove  + 1].pediddo);
        

    }

    


}
int main(int argc, char const *argv[])
{
    struct itens p[10];
    int numeros;
    
    printf("Digite quantos pedidos voce quer fazer : ");
    scanf("%i", &numeros);

    int *Ptr_numero = &numeros;
    fazerPedido(p, Ptr_numero);
    apresentaEremove(p, Ptr_numero);

    return 0;
}
