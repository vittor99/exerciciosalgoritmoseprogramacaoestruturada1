#include <stdio.h>

int main() {
    int N;

    // Le o número inteiro N
    printf("Digite um numero inteiro N: ");
    scanf("%d", &N);

    // Imprime os N primeiros números naturais ímpares
    printf("Os %d primeiros numeros naturais impares:\n", N);
    for (int i = 1; i <= N * 2; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
