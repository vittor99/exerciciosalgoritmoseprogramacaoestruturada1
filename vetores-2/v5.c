#include <stdio.h>

int main() {
    int vetor[10];
    int numero, contador = 0;

    printf("Digite 10 números inteiros:\n");

    // Lê os valores para o vetor
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um número para encontrar seus múltiplos: ");
    scanf("%d", &numero);

    printf("Múltiplos de %d encontrados no vetor:\n", numero);

    // Verifica e conta os múltiplos do número no vetor
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % numero == 0) {
            printf("%d (índice %d)\n", vetor[i], i);
            contador++;
        }
    }

    if (contador == 0) {
        printf("Nenhum múltiplo de %d encontrado no vetor.\n", numero);
    } else {
        printf("Total de múltiplos de %d encontrados: %d\n", numero, contador);
    }

}
