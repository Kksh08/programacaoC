#include <stdio.h>


void sasuke(int naruto) {
    if(naruto > 5){
        printf("%d\n", naruto);
        sasuke(naruto - 1);
    }
}



int main(){

    int madara = 10;

    printf("Guerra ninja\n");
    sasuke(madara);
    
    
    
    
    
    
    
    
    
    
    return 0;
}