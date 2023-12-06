#include <stdio.h>
#include <math.h>

int main() {
    // Passo 1: Le o número
    double numero;
    printf("Digite um numero: ");
    scanf("%lf", &numero);

    // Passo 2: Verifica se o número é positivo ou igual a zero
    if (numero >= 0) {
        // Passo 3: Calcula a raiz quadrada do número
        double raizQuadrada = sqrt(numero);

        // Passo 4: Imprime a raiz quadrada calculada
        printf("A raiz quadrada de %.2lf e: %.2lf\n", numero, raizQuadrada);
    } else {
        // Passo 6: Calcula o quadrado do número
        double quadrado = numero * numero;

        // Passo 7: Imprime o quadrado calculado
        printf("O quadrado de %.2lf e: %.2lf\n", numero, quadrado);
    }

    return 0;
}
