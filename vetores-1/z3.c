#include <stdio.h>

int main() {
    // Definir vetores para armazenar os números e seus quadrados
    double numeros[10];
    double quadrados[10];

    // Ler os números e calcular os quadrados
    printf("Digite 10 números reais:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%lf", &numeros[i]);
        quadrados[i] = numeros[i] * numeros[i];
    }

    // Imprimir os conjuntos
    printf("Números inseridos:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2lf ", numeros[i]);
    }

    printf("\nQuadrados dos números:\n");
    for (int i = 0; i < 10; i++) {
        printf("%.2lf ", quadrados[i]);
    }

    printf("\n");

    
}
