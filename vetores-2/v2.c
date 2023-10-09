#include <stdio.h>

int main() {
    int vetor[20];
    int unicos[20]; // Vetor para armazenar elementos únicos
    int tamanho = 0; // Tamanho atual do vetor de elementos únicos

    printf("Digite 20 números inteiros:\n");

    // Lê os valores para o vetor
    for (int i = 0; i < 20; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Verifica elementos únicos e os armazena no vetor "unicos"
    for (int i = 0; i < 20; i++) {
        int ehRepetido = 0;

        // Verifica se o elemento já está em "unicos"
        for (int j = 0; j < tamanho; j++) {
            if (vetor[i] == unicos[j]) {
                ehRepetido = 1;
                break;
            }
        }

        // Se não for repetido, adiciona ao vetor de elementos únicos
        if (!ehRepetido) {
            unicos[tamanho] = vetor[i];
            tamanho++;
        }
    }

    // Imprime os elementos únicos
    printf("Elementos únicos:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", unicos[i]);
    }

}
