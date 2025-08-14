#include <stdio.h>
#include <time.h>

int main() {
    unsigned int i = 0;

    do {
        printf("digite um numero: ");
        scanf("%u", &i);

        if (i % 2 == 0) {
            printf("%u par\n", i);
        } else {
            printf("%u impar\n", i);
            
        }
    } while (i % 2 != 0);
    printf("O numero %u e impar, por favor digite outro numero par para sair.\n", i);
    return 0;
}