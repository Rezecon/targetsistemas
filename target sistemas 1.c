#include <stdio.h>
#include <stdlib.h>

int main() {
    int INDICE = 13, SOMA = 0, K = 0;

    while (K < INDICE) {
        K = K + 1;
        SOMA = SOMA + K;
    }

    printf("O valor final de SOMA é: %d\n", SOMA);

    return 0;
}
