#include<stdio.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    char string1[100];
    char string2[100];
    char novaString[100];
    printf("Digite a primeira string : ");
    scanf(" %[^\n]", string1);
    printf("Digite a segunda string : ");
    scanf(" %[^\n]", string2);
    
    if(strcmp(string1, string2) == 0)
    {
        printf("Strings iguais ! ");
    }
    else
    {
        printf("Strings diferentes !\n");
        strcat(string1, string2);
        printf("%s", string1);
    } 
        
    
    return 0;
}

