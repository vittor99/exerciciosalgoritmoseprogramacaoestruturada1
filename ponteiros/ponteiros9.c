#include <stdio.h>

int main() {
    int matriz[3][3];

    // Preenche a matriz com alguns valores
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = i * 3 + j;
        }
    }

    // Imprime o endereço de cada posição na matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Endereco da posicao (%d, %d): %p\n", i, j, (void *)&matriz[i][j]);
        }
    }

    return 0;
}
