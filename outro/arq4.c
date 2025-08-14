#include <stdio.h>

int main() {

    float nota1;
    float nota2;

    printf("digite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("digite sua segunda nota: ");
    scanf("%f", &nota2);


    if(nota1 >= nota2){
        printf("nota 1 maior que a nota 2\n");
    }else{
        printf("nota 2 maior que a nota 1\n");
    }
    
    
    return 0;   




}