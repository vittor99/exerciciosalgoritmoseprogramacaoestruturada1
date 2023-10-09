#include <stdio.h>

int main() {
    double vetor[10];
    int quantNegativos = 0;
    double somaPositivos = 0.0;

    // Ler os 10 números reais
    printf("Digite 10 números reais:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%lf", &vetor[i]);

        // Verificar se o número é negativo e incrementar a quantidade
        if (vetor[i] < 0) {
            quantNegativos++;
        }

        // Verificar se o número é positivo e somá-lo
        if (vetor[i] > 0) {
            somaPositivos += vetor[i];
        }
    }

    // Imprimir a quantidade de números negativos e a soma dos números positivos
    printf("Quantidade de números negativos: %d\n", quantNegativos);
    printf("Soma dos números positivos: %.2lf\n", somaPositivos);

}
