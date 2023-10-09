#include <stdio.h>

int main() {
    int vetor[50];

    for (int i = 0; i < 50; i++) {
        vetor[i] = (i + 5 + 1) % (1);
    }

    printf("Vetor de tamanho 50 com os valores calculados:\n");

    for (int i = 0; i < 50; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

}
