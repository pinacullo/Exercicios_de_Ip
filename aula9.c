//esse programa é referente a aula 10

/* inclusões: */
#include <stdio.h>
#include <string.h>

/* constantes: */
#define SUCESSO 0
#define VERDADEIRO (1 == 1)
#define FALSO (!VERDADEIRO)

/* tipos */
typedef unsigned char bool_t;

//---------------------------------------------------------------

/* E X E R C I C I O  1 */

/* constantes */
#define TAMANHO_MAXIMO (20 + 1)

/* funções */
int espacoVazio(char s[]){
    
    int i;
    for (i = 0; i <= strlen(s); i++){
        
    }


}


void exercicio1(void){

    char string[TAMANHO_MAXIMO];
    int lenght;
    //coleta a string do usuário
    printf("digite uma string de ate 20 caracteres: ");
    fgets(string, TAMANHO_MAXIMO, stdin);
    lenght = strlen(string);
    printf("%c\n", string[lenght - 2]);
    
    printf("%s manos", string);
    

}

//----------------------------------------------------------------
int main(int argc, char ** argv){
    
    int opcao;

    //obtem o numero do exercicio que o usuario quer ver
    printf("digite o numero do exercicio que quer ver: ");
    scanf("%d%*c", &opcao);

    switch(opcao){
        case 1:
            exercicio1();
            break;
        default:
            printf("esse valor eh invalido");
    }
}