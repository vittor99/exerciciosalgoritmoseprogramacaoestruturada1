#include <stdio.h>

int main() {
    int vetor[10];

    printf("Digite 10 números inteiros:\n");

    // Lê os valores para o vetor
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Percorre o vetor e atribui 0 a elementos negativos
    for (int i = 0; i < 10; i++) {
        if (vetor[i] < 0) {
            vetor[i] = 0;
        }
    }

    // Imprime o vetor após a modificação
    printf("Vetor após a modificação:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

}
