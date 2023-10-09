#include <stdio.h>

int main() {
    int vetorA[10];
    int vetorB[10];
    int vetorC[10];

    printf("Digite os 10 números inteiros do vetor A:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    printf("Digite os 10 números inteiros do vetor B:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetorB[i]);
    }

    // Calcula o vetor C
    for (int i = 0; i < 10; i++) {
        vetorC[i] = vetorA[i] - vetorB[i];
    }

    printf("Vetor C (A - B):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetorC[i]);
    }
    printf("\n");

}
