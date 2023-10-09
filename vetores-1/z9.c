#include <stdio.h>

int main() {
    int vetor[6];

    // Ler os 6 valores inteiros pares
    printf("Digite 6 valores inteiros pares:\n");

    for (int i = 0; i < 6; i++) {
        do {
            scanf("%d", &vetor[i]);
            if (vetor[i] % 2 != 0) {
                printf("Digite um valor par.\n");
            }
        } while (vetor[i] % 2 != 0);
    }

    // Imprimir os valores na ordem inversa
    printf("Valores lidos na ordem inversa:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }

  
}
