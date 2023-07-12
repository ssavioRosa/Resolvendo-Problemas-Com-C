#include<stdio.h>


int main(int argc, char const *argv[])
{
    char string[100];
    int cont = 0;
    cont = strlen(string);

    printf("Digite uma palavras : ");
    scanf(" %[^\n]", string);

    for (int i = 0; i < cont; i++)
    {
        if (string[i] != 'a' && string[i] != 'e' && string[i] != 'i' && string[i] != 'o' && string[i] != 'u')
        {
            printf("%c", string[i]);
            
            
        }
    }
    
    
    
    
        return 0;
}
