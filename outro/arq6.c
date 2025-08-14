#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num_jogador, num_cpu, resultado;
    char tipo_comparacao;

    srand(time(0));
    num_cpu = rand() % 100 + 1; // Gera um número aleatório entre 1 e 100

    //inicio do jogo
    printf("bem vindo ao jogo maior,menor ou igual\n");
    printf("voce deve escolhe um numero e o tipo de comparacao\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escolha a comparacao: ");
    scanf(" %c", &tipo_comparacao);

    printf("digite um numero (entre 1 e 100) ");
    scanf("%d", &num_jogador);

    printf("O numero do computador e: %d\n", num_cpu);

    switch (tipo_comparacao)
    {
    case 'M':
        if(num_jogador > num_cpu){
            printf("Parabens voce ganhou");
        } else {
            printf("que pena voce perdeu");
        }
        break;

    case 'N':    
        if(num_jogador < num_cpu){
            printf("Parabens voce ganhou");
        } else {
            printf("que pena voce perdeu");
        }
        break;

    case 'I':
        if(num_jogador == num_cpu){
            printf("Parabens voce ganhou");
        } else{
            printf("que pena voce perdeu");
        }
        break;

    default:
        printf("Tipo de comparacao invalido\n");
        break;
    }    
  return 0;
}