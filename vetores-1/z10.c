#include <stdio.h>

int main() {
    int notas[15];
    int soma = 0;

    // Ler as notas da prova de 15 alunos
    printf("Digite as notas das provas dos 15 alunos:\n");
    for (int i = 0; i < 15; i++) {
        scanf("%d", &notas[i]);
        soma += notas[i];
    }

    // Calcular a média geral
    float media = (float)soma / 15;

    // Imprimir a média geral
    printf("A média geral das notas é: %.2f\n", media);


}
