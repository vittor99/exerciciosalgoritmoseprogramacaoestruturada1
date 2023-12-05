#include <stdio.h>

int main() {
    int num_alunos = 30;
    float notas[num_alunos][3];
    float medias[num_alunos];
    float media_geral = 0;

    // Lê as notas dos alunos
    for (int i = 0; i < num_alunos; i++) {
        printf("Digite as notas do aluno %d (n1 n2 n3): ", i + 1);
        scanf("%f %f %f", &notas[i][0], &notas[i][1], &notas[i][2]);

        // Calcula a média ponderada
        medias[i] = (notas[i][0] * 2 + notas[i][1] * 4 + notas[i][2] * 3) / 10;

        // Soma as médias para calcular a média geral
        media_geral += medias[i];
    }

    // Calcula a média geral da turma
    media_geral /= num_alunos;

    // Exibe as médias e determina se o aluno foi aprovado ou reprovado
    printf("Médias dos alunos e status:\n");
    for (int i = 0; i < num_alunos; i++) {
        printf("Aluno %d: Média = %.2f ", i + 1, medias[i]);
        if (medias[i] >= 7.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    // Exibe a média geral da turma
    printf("Média Geral da Turma: %.2f\n", media_geral);


  
}
