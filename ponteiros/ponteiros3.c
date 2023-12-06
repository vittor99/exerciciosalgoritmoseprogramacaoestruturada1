#include <stdio.h>

int main() {
    int var1, var2;

    printf("Digite o valor para var1: ");
    scanf("%d", &var1);

    printf("Digite o valor para var2: ");
    scanf("%d", &var2);

    int *enderecoVar1 = &var1;
    int *enderecoVar2 = &var2;

    if (enderecoVar1 > enderecoVar2) {
        printf("Conteudo do endereco maior (%p): %d\n", (void *)enderecoVar1, *enderecoVar1);
    } else if (enderecoVar1 < enderecoVar2) {
        printf("Conteudo do endereco maior (%p): %d\n", (void *)enderecoVar2, *enderecoVar2);
    } else {
        printf("Os enderecos sao iguais: %p\n", (void *)enderecoVar1);
    }

    return 0;
}
