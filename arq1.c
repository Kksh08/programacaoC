#include <stdio.h>

int main(){
    int numero1, numero2;
    int soma, mult, sub;

    printf("Digite o primeiro numero:\n"); 
    scanf("%d", &numero1);                 

    printf("Digite o segundo numero:\n");  
    scanf("%d", &numero2);                 

    
    soma = numero1 + numero2;
    mult = numero1 * numero2;
    sub = numero1 - numero2;

    printf("A soma é: %d\n", soma);             
    printf("A multiplicação é: %d\n", mult);    
    printf("A subtração é: %d\n", sub); 

    return 0;
}
