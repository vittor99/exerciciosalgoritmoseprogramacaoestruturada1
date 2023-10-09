#include <stdio.h>

int main() {
    int vetor1[10];
    int vetor2[10];
    int contador_vetor2 = 0;

    printf("Digite 10 números inteiros no intervalo [0, 49]:\n");

    for (int i = 0; i < 10; i++) {
        do {
            printf("Digite o valor %d: ", i + 1);
            scanf("%d", &vetor1[i]);
        } while (vetor1[i] < 0 || vetor1[i] >= 50);
    }

    for (int i = 0; i < 10; i++) {
        if (vetor1[i] % 2 != 0) {
            vetor2[contador_vetor2] = vetor1[i];
            contador_vetor2++;
        }
    }

    printf("\nVetor 1:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor1[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

    printf("\nVetor 2 (Apenas ímpares de vetor1):\n");
    for (int i = 0; i < contador_vetor2; i++) {
        printf("%d ", vetor2[i]);
        if ((i + 1) % 2 == 0) {
            printf("\n");
        }
    }

}
