#include <stdio.h>

int main() {
    // Inicialize as variáveis para contar os votos de cada candidato, votos nulos e votos em branco
    int votos_candidato1 = 0;
    int votos_candidato2 = 0;
    int votos_candidato3 = 0;
    int votos_candidato4 = 0;
    int votos_nulos = 0;
    int votos_em_branco = 0;
    
    int codigo_voto;

    // Leia os votos até que seja inserido 0
    while (1) {
        printf("Digite o código do voto (0 para encerrar): ");
        scanf("%d", &codigo_voto);

        if (codigo_voto == 0) {
            break;
        } else if (codigo_voto == 1) {
            votos_candidato1++;
        } else if (codigo_voto == 2) {
            votos_candidato2++;
        } else if (codigo_voto == 3) {
            votos_candidato3++;
        } else if (codigo_voto == 4) {
            votos_candidato4++;
        } else if (codigo_voto == 5) {
            votos_nulos++;
        } else if (codigo_voto == 6) {
            votos_em_branco++;
        } else {
            printf("Código de voto inválido!\n");
        }
    }

    // Calcule e exiba os resultados
    printf("Total de votos para o Candidato 1: %d\n", votos_candidato1);
    printf("Total de votos para o Candidato 2: %d\n", votos_candidato2);
    printf("Total de votos para o Candidato 3: %d\n", votos_candidato3);
    printf("Total de votos para o Candidato 4: %d\n", votos_candidato4);
    printf("Total de votos nulos: %d\n", votos_nulos);
    printf("Total de votos em branco: %d\n", votos_em_branco);

    
}
