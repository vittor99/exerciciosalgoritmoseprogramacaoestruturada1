#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 3.14;
    char caractere = 'A';

    int *ponteiroInt;
    float *ponteiroReal;
    char *ponteiroChar;

    ponteiroInt = &inteiro;
    ponteiroReal = &real;
    ponteiroChar = &caractere;

    printf("Valores antes da modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", caractere);

    *ponteiroInt = 20;
    *ponteiroReal = 6.28;
    *ponteiroChar = 'B';

    printf("\nValores apos a modificacao:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    printf("Char: %c\n", caractere);

    return 0;
}
