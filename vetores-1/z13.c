#include <stdio.h>

int main() {
    int valores[5];
    int maior, menor;
    int posicaoMaior, posicaoMenor;

    // Ler os 5 valores inteiros
    printf("Digite 5 valores inteiros:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &valores[i]);

        // Inicializar o maior e o menor com o primeiro valor
        if (i == 0) {
            maior = valores[i];
            menor = valores[i];
            posicaoMaior = posicaoMenor = i;
        }

        // Atualizar o maior e o menor, se necessário
        if (valores[i] > maior) {
            maior = valores[i];
            posicaoMaior = i;
        }
        if (valores[i] < menor) {
            menor = valores[i];
            posicaoMenor = i;
        }
    }

    // Imprimir a posição do maior e do menor valor
    printf("Posição do maior valor: %d\n", posicaoMaior);
    printf("Posição do menor valor: %d\n", posicaoMenor);

}
