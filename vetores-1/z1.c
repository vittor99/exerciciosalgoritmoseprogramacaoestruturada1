#include <stdio.h>

int main() {
    int A[6];

    // (a) Atribua os valores ao vetor
    A[0] = 1;
    A[1] = 0;
    A[2] = 5;
    A[3] = 2;
    A[4] = 5;
    A[5] = 7;

    // (b) Calcule e mostre a soma das posições A[0], A[1] e A[5]
    int soma = A[0] + A[1] + A[5];
    printf("A soma de A[0], A[1] e A[5] é: %d\n", soma);

    // (c) Modifique o vetor na posição 4 para 100
    A[4] = 100;

    // (d) Mostre cada valor do vetor em uma linha
    printf("Valores do vetor A:\n");
    for (int i = 0; i < 6; i++) {
        printf("A[%d] = %d\n", i, A[i]);
    }

    
}
