#include <stdio.h>

int main() {
    int vetor[6];

    // Ler os valores inteiros
    printf("Digite 6 valores inteiros:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &vetor[i]);
    }

    // Imprimir os valores na ordem inversa
    printf("Valores lidos na ordem inversa:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }

}
