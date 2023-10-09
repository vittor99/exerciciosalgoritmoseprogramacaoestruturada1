#include <stdio.h>

int main() {
    int vetor[10];
    int maior, posicao;

    // Ler os valores do vetor
    printf("Digite 10 números inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
    }

    // Inicializar o maior com o primeiro elemento e sua posição com 0
    maior = vetor[0];
    posicao = 0;

    // Encontrar o maior elemento e sua posição
    for (int i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    // Imprimir o vetor
    printf("Vetor lido:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Imprimir o maior elemento e sua posição
    printf("O maior elemento é %d e está na posição %d.\n", maior, posicao);

}
