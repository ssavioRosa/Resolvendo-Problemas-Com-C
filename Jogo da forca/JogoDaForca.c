#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#define cls system("clear||cls"); //definição da constante responsavel pela limpeza do terminal

void localdaseta(int realPosition, int posicaoDaTecla) {  //função responsavel pela a seta de todos os menus
    if (realPosition == posicaoDaTecla) {
        printf("\t=> ");
    }
    else {
        printf("\t   ");
    }
}
// função que permite determinar a posição do cursor no terminal, facilitando a disposição dos elementos durante o jogo
void gotoYX(int x,int y){
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x,y});
}
// função responsavel por dar cores a fonte do terminal
void cores(int l ,int f){
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),l+(f<<4 ));
}
// Função que faz a exibição das locunas e letras do jogo
void visualizacao(char viz[] ){
    int i;
    cores(15,0);
    for (i=0; i<strlen(viz); i++ ){
        printf("%c ",viz[i]);
    }
    printf("\n\n");
}
int main() {
    int localreal=1; //define o numero da opção do menu
    int opcaomenu=0; //variavel flag para execução do menu
    while (opcaomenu==0)
    {
        system("cls");
         cores(14,0);
        printf("---------------------------------------\n");
        printf("|-----------[JOGO DA FORCA]-----------|\n");
        printf("---------------------------------------\n");
        printf("\t    W=CIMA | S=BAIXO\n");
        printf("\n");
         cores(14,0);
        localdaseta(1,localreal); printf("\t[PLAY]\n");
        cores(20,15);
        localdaseta(2,localreal); printf("\t[EXIT]");
        int c=getch();  //função responsavel por esperar a proxima tecla a ser digitada no terminal
        if(c == 119){ //As teclas são definidas por codigo ascii
            if (localreal > 1) { //Condicional para subir a seta
                localreal--;
            }
        } else if (c == 115) {
            if (localreal < 7) { //Condional para descer a seta
                localreal++;
            }
        }else if (c==13) {
            switch(localreal){ //definição da funções a serem execultadas com base na opção selecionada no menu
                case 1:
                cls;
                opcaomenu=1; //fecha o menu
                break;
                case 2:
                exit(0); //fecha o sistema
                break;
            }
        }
    }    
    do{  
        char secreta[20]={""}, //palavra a ser descoberta
             resposta[20]={""}, //palavra na qual vai ser preenchida por "_"
             palavra[20]={""}, //copia reserva da palavra secreta
             pista[20], letra ;
        int  erros,acertos,
             i,j,flag,max=1   ;
        // Label é o ponto de partida para o goto no caso de uma nova partida    
        label:
            erros=0,acertos=0, //Variaveis de erros e acertos são zeradas no inicio de execução do jogo
            cores(14,0);
            printf("************ Jogo da Forca ************\n");
            printf("************** Jogador 1 **************\n");
            printf("\tMaximo de 20 letras\n\n");
            printf("---------------------------------------\n");
            printf("|------[Digite a palavra secreta]-----|\n");
            printf("---------------------------------------\n");
            //Definição da palavra secreta
            gets(secreta);
            //copia da palavra secreta para a reserva
            strcpy(palavra, secreta);
            printf("---------------------------------------\n");
            printf("|-------------[Uma Pista]-------------|\n");
            printf("---------------------------------------\n");
            //Definição da pista
            scanf("%s",pista);
            //determina o número de caracteres da palavra escolhida
            max = strlen (secreta);
            //substituir a quantidade de letras por "-"
            for(i=0;i<max; i++)
                resposta[i] = '_';
            cls
            
            printf("************ Jogo da Forca ************\n");
            printf("************** Jogador 2 **************\n\n");
            printf("Limite de 6 erros. Palavra de até 20 letras\n\n");
            cls
            
            //exibir a pista no terminal
            cores(20,15);
            printf("\n\t  Pista -> ( %s )   \n",pista);
            //timer de 3s para a pista sumir da tela
            Sleep(3000);
            //laço de repetição com switch case portando os estados da forca
            while ( erros < 6 ){
                cores(11,0);
                cls
                switch (erros)
                {  
                case 1:
                cores(14,0);
                printf("  _______   \n");
            printf(" | /     |   \n");
            printf(" |/      |    \n");
            printf(" |       |   \n");
            printf(" |     (^~^)\n");
            printf(" |       \n");
            printf(" |       \n");
            printf(" |     \n");
            printf(" |        \n");
            printf(" |            \n");
            printf("_|__          \n");
                break;
                case 2:
                cores(14,0);
                printf("  _______   \n");
            printf(" | /     |   \n");
            printf(" |/      |    \n");
            printf(" |       |   \n");
            printf(" |     (^~^)\n");
            printf(" |       | \n");
            printf(" |       |    \n");
            printf(" |       |\n");
            printf(" |        \n");
            printf(" |            \n");
            printf("_|__           \n");
                break;
                case 3:
                cores(14,0);
            printf("  _______   \n");
            printf(" | /     |   \n");
            printf(" |/      |    \n");
            printf(" |       |   \n");
            printf(" |     (^~^)\n");
            printf(" |       |\\ \n");
            printf(" |       | \\  \n");
            printf(" |       |  : \n");
            printf(" |        \n");
            printf(" |            \n");
            printf("_|__           \n");
                break;
                case 4:
                cores(14,0);
                    printf("  _______   \n");
            printf(" | /     |   \n");
            printf(" |/      |    \n");
            printf(" |       |   \n");
            printf(" |     (^~^)\n");
            printf(" |      /|\\ \n");
            printf(" |     / | \\  \n");
            printf(" |    :  |  : \n");
            printf(" |        \n");
            printf(" |            \n");
            printf("_|__           \n");
                break;
            case 5:
            cores(14,0);
                    printf("  _______   \n");
            printf(" | /     |   \n");
            printf(" |/      |    \n");
            printf(" |       |   \n");
            printf(" |     (^~^)\n");
            printf(" |      /|\\ \n");
            printf(" |     / | \\  \n");
            printf(" |    :  |  : \n");
            printf(" |        \\\n");
            printf(" |         \\   \n");
            printf("_|__           \n");
                break;
            case 6:
            cores(14,0);
                    printf("  _______   \n");
            printf(" | /     |   \n");
            printf(" |/      |   \n");
            printf(" |       |   \n");
            printf(" |     (^~^)\n");
            printf(" |      /|\\ \n");
            printf(" |     / | \\  \n");
            printf(" |    :  |  : \n");
            printf(" |     // \\ \n");
            printf(" |    //   \\   \n");
            printf("_|__           \n");          
                break;    
                default:
            cores(14,0);    
                printf("  _______   \n");
            printf(" | /     |   \n");
            printf(" |/      |    \n");
            printf(" |       |   \n");
            printf(" |     \n");
            printf(" |       \n");
            printf(" |       \n");
            printf(" |     \n");
            printf(" |        \n");
            printf(" |            \n");
            printf("_|__           \n");
                    break;
                }
                //gotoXY está servindo para mudar a posição do cursor no terminal, conforme as seguintes cordenadas dadas X,Y.
                //usando gotoYX para alinhar erros e acertos para o lado direito da tela
                gotoYX(60,6);
                cores(14,0);
                printf("Acertos = %3d\n",acertos);
                gotoYX(60,5);
                printf("Erros   = %3d\n",erros);
                gotoYX(0,16);
                visualizacao(resposta);
                gotoYX(0,15);
                cores(14,0);
                printf("Digite uma letra: ");
                //define a letra escolhida pelo usuário
                scanf (" %c", &letra);
                flag = 0;
                //laço de repetição para incrementar acertos e substituir '-', pela letra correta.
                for( i=0; i<max; i++ ){
                    if( toupper(secreta[i]) == toupper( letra )){
                        cores(14,0);
                        flag = 1;
                        secreta[i] = '_';
                        resposta[i] = letra;
                        acertos++;
                    }
                }
                // condição para incrementar os erros
                if( ! flag ){
                    erros++;
                }
                //condição para finalizar o jogo com vitoria.
                if(acertos == max){
                    visualizacao(resposta);
                    cores(10,0);// cor das letras e cor de fundo da tela
                    Beep(1500,250);// faz um sonzinho
                    printf("\n\n  Acertou Todas As Letras em %d Tentativas . . . !  \n\n",erros + acertos);
                    printf("       ___________      \n");
                    printf("      '._==_==_=_.'     \n");
                    printf("      .-\\:      /-.    \n");
                    printf("     | (|:.     |) |    \n");
                    printf("      '-|:.     |-'     \n");
                    printf("        \\::.    /      \n");
                    printf("         '::. .'        \n");
                    printf("           ) (          \n");
                    printf("         _.' '._        \n");
                    printf("        '-------'       \n\n");
                    
                    
                    break;  // sai do opp
                }
                //condição para finalizar o jogo com derrota.
                else{
                    if(erros == 6){
                        cores(20,15);
                        //exibir a quantidade de acertos e erros
                        printf ("\n\nAcertos: %d - Erros: %d\n\n\n",acertos, erros);
                        printf("\nPuxa, voce foi enforcado!\n");
                        printf("A palavra era [%s]\n\n", palavra);
                        printf("\t    _______________         \n");
                        printf("\t   /               \\       \n"); 
                        printf("\t  /                 \\      \n");
                        printf("\t /                   \\  \n");
                        printf("\t |   XXXX     XXXX   |    \n");
                        printf("\t |   XXXX     XXXX   |     \n");
                        printf("\t |   XXX       XXX   |      \n");
                        printf("\t |                   |      \n");
                        printf("\t \\__      XXX      __/     \n");
                        printf("\t   |\\     XXX     /|       \n");
                        printf("\t   | |           | |        \n");
                        printf("\t   | I I I I I I I |        \n");
                        printf("\t   |  I I I I I I  |        \n");
                        printf("\t   \\_             _/       \n");
                        printf("\t     \\_         _/         \n");
                        printf("\t       \\_______/           \n");
                        
                        break;  // sai do opp                     
                    }
                }
            }         
            gotoYX(60,6);
            cores(7,0);
            printf("Acertos = %3d\n",acertos);
            gotoYX(60,5);
            printf("Erros   = %3d\n",erros);
            gotoYX(20,15);
            printf("Jogar Novamente S/N \n");
            //condição caso o jogardor deseje continuar, o terminal é resetado.
            if (toupper((char)getch())=='S')
            {
            cls;
            goto label;
            }    
    }while( toupper((char)getch()) != 'N' );
   
    return 0;
}