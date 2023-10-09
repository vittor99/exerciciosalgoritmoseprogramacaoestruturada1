#include <stdio.h>

int main() {
    float vetor[5];
    int codigo;

    printf("Digite 5 números reais:\n");

    // Lê os valores para o vetor
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    printf("Digite um código (0 para sair, 1 para ordem direta, 2 para ordem inversa): ");
    scanf("%d", &codigo);

    if (codigo == 0) {
        printf("Programa encerrado.\n");
    } else if (codigo == 1) {
        printf("Vetor na ordem direta:\n");
        for (int i = 0; i < 5; i++) {
            printf("%.2f ", vetor[i]);
        }
        printf("\n");
    } else if (codigo == 2) {
        printf("Vetor na ordem inversa:\n");
        for (int i = 4; i >= 0; i--) {
            printf("%.2f ", vetor[i]);
        }
        printf("\n");
    } else {
        printf("Código inválido. Use 0, 1 ou 2.\n");
    }

}
