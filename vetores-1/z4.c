#include <stdio.h>

int main() {
    int vetor[8];
    int x, y;

    // Ler os valores do vetor
    printf("Digite 8 valores inteiros para o vetor:\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }

    // Ler os valores de X e Y
    printf("Digite dois valores X e Y (posições no vetor): ");
    scanf("%d %d", &x, &y);

    // Verificar se X e Y estão dentro dos limites do vetor
    if (x >= 0 && x < 8 && y >= 0 && y < 8) {
        // Calcular a soma dos valores nas posições X e Y
        int soma = vetor[x] + vetor[y];
        printf("A soma dos valores em vetor[%d] e vetor[%d] é: %d\n", x, y, soma);
    } else {
        printf("As posições X e Y estão fora dos limites do vetor.\n");
    }

    // Contar e escrever quantos valores pares existem no vetor
    int countPares = 0;
    for (int i = 0; i < 8; i++) {
        if (vetor[i] % 2 == 0) {
            countPares++;
        }
    }
    printf("O vetor possui %d valores pares.\n", countPares);

    return 0;
}
