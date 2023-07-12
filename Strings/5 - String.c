#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char frase[40];
    int cont = 0;
    printf("Digite umma frase de ate 40 caracteres : ");
    do
    {
        
        scanf(" %[^\n]", frase);
        cont = strlen(frase);

        if (cont > 40)
        {
            printf("Frase com %i caracteres !\nPor favor digite novamente : ", cont);
        }
        

    } while (cont > 40);
    
    printf("\n\n");
    
    for (int i = 0; i < cont; i++)
    {
        printf("\n%c", frase[i]);
        printf("\n");
    }
    
    return 0;
}
