#include <stdio.h>

void calcularSoma(int *a, int b) {
    *a = *a + b;
}

int main() {
    int valorA, valorB;

    printf("Digite o valor para A: ");
    scanf("%d", &valorA);

    printf("Digite o valor para B: ");
    scanf("%d", &valorB);

    calcularSoma(&valorA, valorB);

    printf("Apos a modificacao:\n");
    printf("A: %d\n", valorA);
    printf("B: %d\n", valorB);

    return 0;
}
