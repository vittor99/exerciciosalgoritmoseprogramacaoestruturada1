#include <stdio.h>

int main() {
    int valores[5];
    int maior, menor, soma = 0;

    // Ler os 5 valores inteiros
    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);

        // Inicializar o maior e o menor com o primeiro valor
        if (i == 0) {
            maior = valores[i];
            menor = valores[i];
        }

        // Atualizar o maior e o menor, se necessário
        if (valores[i] > maior) {
            maior = valores[i];
        }
        if (valores[i] < menor) {
            menor = valores[i];
        }

        // Somar os valores para calcular a média
        soma += valores[i];
    }

    // Calcular a média
    double media = (double)soma / 5;

    // Imprimir os valores lidos, o maior, o menor e a média
    printf("Valores lidos:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Média dos valores: %.2lf\n", media);

}
