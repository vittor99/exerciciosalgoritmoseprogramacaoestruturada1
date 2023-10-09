#include <stdio.h>

int main() {
    int vetor[10];
    int i, j;

    printf("Digite 10 números inteiros:\n");

    // Lê os valores para o vetor
    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Valores iguais:\n");

    // Verifica se existem valores iguais no vetor
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] == vetor[j]) {
                printf("%d\n", vetor[i]);
            }
        }
    }

}
