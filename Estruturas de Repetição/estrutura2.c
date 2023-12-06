#include <stdio.h>

int main() {
    int N;

    // Le o número inteiro positivo N
    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &N);

    // Verifica se N é um número inteiro positivo
    if (N < 0) {
        printf("Por favor, digite um numero inteiro positivo.\n");
        return 1; // Encerra o programa com código de erro
    }

    // Imprime todos os números naturais de 0 até N em ordem decrescente
    printf("Numeros naturais de 0 ate %d em ordem decrescente:\n", N);
    for (int i = N; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
