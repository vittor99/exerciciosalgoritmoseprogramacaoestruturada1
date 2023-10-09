#include <stdio.h>

int main() {
    int vetor1[10];
    int vetor2[10];
    int vetor3[20];  // O terceiro vetor terá o dobro do tamanho dos outros

    printf("Digite os 10 números inteiros do primeiro vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os 10 números inteiros do segundo vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    // Preenche o terceiro vetor com os valores de vetor1 nas posições pares
    // e os valores de vetor2 nas posições ímpares
    for (int i = 0; i < 10; i++) {
        vetor3[2 * i] = vetor1[i];       // Posições pares
        vetor3[2 * i + 1] = vetor2[i];   // Posições ímpares
    }

    printf("Terceiro vetor (Pares: vetor1, Ímpares: vetor2):\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");

}
