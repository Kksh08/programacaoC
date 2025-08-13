#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int escolha_jogador, escolha_CPU;
    srand(time(0));

    printf("Jogo de jokenpo\n");
    printf("Escolha uma opcao:\n ");
    printf("1. Pedra\n");
    printf(" 2. papel\n");
    printf(" 3. Tesousa\n");
    printf("Ecolha: ");
    scanf("%d", &escolha_jogador);

    escolha_CPU = rand() % 3 + 1;

    switch(escolha_jogador)
    {
    case 1:
        printf("jogador pedra - ");
        break;
    case 2:
        printf("jogador papel - "); 
        break;
    case 3:
        printf("jogador tesoura - "); 
        break;
    default:
        printf("jogador invalido - ");
        break;  
    }
    
    switch(escolha_CPU)
    {
    case 1:
        printf("cpu pedra\n ");  
        break;
    case 2:
        printf("cpu papel\n ");
        break;
    case 3:
        printf("cpu tesoura\n "); 
        break;                   


    }









    
}
