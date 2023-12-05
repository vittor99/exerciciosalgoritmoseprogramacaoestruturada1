#include <stdio.h>

int main() {
    // Declare as variáveis para os lados do triângulo
    float A, B, C;

    // Solicite os valores dos lados ao usuário
    printf("Digite o valor de A: ");
    scanf("%f", &A);
    printf("Digite o valor de B: ");
    scanf("%f", &B);
    printf("Digite o valor de C: ");
    scanf("%f", &C);

    // Verifique se os valores podem formar um triângulo
    if (A + B > C && A + C > B && B + C > A) {
        // Verifique o tipo de triângulo com base nos ângulos
        if (A == B && B == C) {
            printf("Triângulo Equilátero (todos os ângulos são iguais a 60º)\n");
        } else if (A == B || A == C || B == C) {
            printf("Triângulo Isósceles (dois ângulos iguais)\n");
        } else {
            printf("Triângulo Escaleno (todos os ângulos são diferentes)\n");
        }

        // Verifique se é um triângulo retângulo, obtusângulo ou acutângulo
        float maior, menor1, menor2;
        if (A >= B && A >= C) {
            maior = A;
            menor1 = B;
            menor2 = C;
        } else if (B >= A && B >= C) {
            maior = B;
            menor1 = A;
            menor2 = C;
        } else {
            maior = C;
            menor1 = A;
            menor2 = B;
        }

        if (maior * maior == menor1 * menor1 + menor2 * menor2) {
            printf("Triângulo Retângulo (um ângulo é 90º)\n");
        } else if (maior * maior > menor1 * menor1 + menor2 * menor2) {
            printf("Triângulo Obtusângulo (um ângulo é maior que 90º)\n");
        } else {
            printf("Triângulo Acutângulo (todos os ângulos são menores que 90º)\n");
        }
    } else {
        printf("Estes valores não formam um triângulo.\n");
    }

    return 0;
}
