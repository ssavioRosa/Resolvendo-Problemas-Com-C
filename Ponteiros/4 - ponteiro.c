#include<stdio.h>

int main(int argc, char const *argv[])
{   
    int a;
    int *ptr_a = &a;
    int **ptr_ptr_a = &ptr_a; 
    int ***ptr_ptr_ptr_a = &ptr_ptr_a;

    printf("Digite um valor aleatorio : ");
    scanf("%i", &a);


    printf("O dobro do valor que voce digitou é : %i", *ptr_a * 2);
    printf("\nO triplo do valor que voce digiou é : %i", **ptr_ptr_a * 3);
    printf("\nO quadruplo do valor que voce digitou é : %i", ***ptr_ptr_ptr_a * 4);

    return 0;
}
