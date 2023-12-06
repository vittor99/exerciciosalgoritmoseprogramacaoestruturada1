#include <stdio.h>

int main() {
    int var1, var2;

    int *enderecoVar1 = &var1;
    int *enderecoVar2 = &var2;

    if (enderecoVar1 > enderecoVar2) {
        printf("O endereco de var1 e maior: %p\n", (void *)enderecoVar1);
    } else if (enderecoVar1 < enderecoVar2) {
        printf("O endereco de var2 e maior: %p\n", (void *)enderecoVar2);
    } else {
        printf("Os enderecos sao iguais: %p\n", (void *)enderecoVar1);
    }

    return 0;
}
