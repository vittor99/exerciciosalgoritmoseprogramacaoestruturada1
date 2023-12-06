#include <stdio.h>

int main() {
    // Inicializa a variável para armazenar os múltiplos de 3
    int multiploDeTres = 3;

    // Imprime os cinco primeiros múltiplos de 3
    printf("Os cinco primeiros multiplos de 3 sao:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", multiploDeTres);
        multiploDeTres += 3;  // Adiciona 3 para obter o próximo múltiplo
    }

    return 0;
}
