#include <stdio.h>

int main() {
    int valores[6];

    printf("Digite 6 valores inteiros:\n");

    // Lê os valores fornecidos pelo usuário
    for (int i = 0; i < 6; i++) {
        scanf("%d", &valores[i]);
    }

    printf("Valores lidos:\n");

    // Mostra os valores lidos
    for (int i = 0; i < 6; i++) {
        printf("%d\n", valores[i]);
    }

   
}
