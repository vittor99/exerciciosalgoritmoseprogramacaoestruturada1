#include <stdio.h>

int main() {
    int array[5];
    int *ptr = array;  // Inicializa um ponteiro para o início do array

    // Le o array do teclado usando aritmética de ponteiros
    for (int i = 0; i < 5; i++) {
        printf("Digite o valor para array[%d]: ", i);
        scanf("%d", ptr + i);  
    }

    // Imprima o dobro de cada valor usando aritmética de ponteiros
    printf("\nO dobro de cada valor:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i) * 2);  // Usa aritmética de ponteiros para acessar os elementos e imprimir o dobro
    }

    return 0;
}
