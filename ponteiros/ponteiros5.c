#include <stdio.h>

void ajustarValores(int *a, int *b) {
    if (*a < *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    ajustarValores(&valor1, &valor2);

    printf("Valores ajustados:\n");
    printf("Primeira variavel: %d\n", valor1);
    printf("Segunda variavel: %d\n", valor2);

    return 0;
}
