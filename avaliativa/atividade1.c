#include <stdio.h>
#include <math.h>

int main() {
    double x, result;

    // Solicitar ao usuário que insira o valor de x
    printf("Digite o valor de x: ");
    scanf("%lf", &x);

    // Verificar se o denominador é zero ou negativo
    if (x * x - 16 <= 0) {
        printf("Erro: O valor de x resulta em um denominador não permitido.\n");
    } else {
        // Calcular f(x) usando a fórmula dada
        result = (5 * x + 3) / sqrt(x * x - 16);

        // Imprimir o resultado
        printf("O valor de f(x) é: %lf\n", result);
    }

    
}
