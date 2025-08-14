#include <stdio.h>

int main(){
    
    char produtoA[30] = "produto A";
    char produtoB[30] = "produto B";

    unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueminimoA = 500;
    unsigned int estoqueminimoB = 2500;

    double valortotalA = estoqueA * valorA;
    double valortotalB = estoqueB * valorB;

    int resultadoA, resultadoB;

    printf("Produto %s tem estoque %u e o valor unitario e %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u e o valor unitario e %.2f\n", produtoB, estoqueB, valorB);

    resultadoA = estoqueA > estoqueminimoA;
    resultadoB = estoqueB > estoqueminimoB;

    printf("Produto %s tem estoque minimo %d\n", produtoA, resultadoA);
    printf("Produto %s tem estoque minimo %d\n", produtoB, resultadoB);

    

   
    return 0;
}