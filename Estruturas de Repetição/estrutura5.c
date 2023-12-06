#include <stdio.h>

int main() {
    // Inicializa a variável para armazenar a soma dos números pares
    int soma = 0;

    // Loop para calcular a soma dos 50 primeiros números pares
    for (int i = 2; i <= 100; i += 2) {
        soma += i;
    }

    // Imprime a soma dos números pares
    printf("A soma dos 50 primeiros numeros pares e: %d\n", soma);

    return 0;
}
