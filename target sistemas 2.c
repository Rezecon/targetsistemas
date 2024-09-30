#include <stdio.h>
#include <stdlib.h>

int verificaFibonacci(int n) {
    int a = 0, b = 1, proximo;

    if (n == a || n == b) {
        return 1;
    }

    proximo = a + b;

    while (proximo <= n) {
        if (proximo == n) {
            return 1;
        }
        a = b;
        b = proximo;
        proximo = a + b;
    }

    return 0;
}

int main() {
    int numero;

    printf("Informe um numero: ");
    scanf("%d", &numero);

    if (verificaFibonacci(numero)) {
        printf("O numero %d pertence a sequencia de Fibonacci.\n", numero);
    } else {
        printf("O numero %d nao pertence a sequencia de Fibonacci.\n", numero);
    }

    return 0;
}
