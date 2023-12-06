#include <stdio.h>
#include <stdlib.h>

int main() {
    // Variáveis para estatísticas
    int totalHabitantes = 0;
    int mulheresCastanhasCastanhasEntre18e35 = 0;

    // Variáveis para dados de cada habitante
    char sexo, corOlhos, corCabelos;
    char idade[4]; // Usar uma string para armazenar a idade como texto
    float salario;

    // Loop para coletar dados dos habitantes
    while (1) {
        // Solicita dados do habitante
        printf("\nInforme os dados do habitante (ou idade -1 para encerrar):\n");

        // Validação do sexo
        do {
            printf("Sexo (m ou f): ");
            scanf(" %c", &sexo);
        } while (sexo != 'm' && sexo != 'f');

        // Validação da cor dos olhos
        do {
            printf("Cor dos olhos (a, v, c ou p): ");
            scanf(" %c", &corOlhos);
        } while (corOlhos != 'a' && corOlhos != 'v' && corOlhos != 'c' && corOlhos != 'p');

        // Validação da cor dos cabelos
        do {
            printf("Cor dos cabelos (l, c, p ou r): ");
            scanf(" %c", &corCabelos);
        } while (corCabelos != 'l' && corCabelos != 'c' && corCabelos != 'p' && corCabelos != 'r');

        // Validação da idade
        do {
            printf("Idade (ou -1 para encerrar): ");
            scanf("%3s", idade);
            if (idade[0] == '-' && idade[1] == '1' && idade[2] == '\0') {
                // Se for "-1", sair do loop
                break;
            }
        } while (atoi(idade) < 10 || atoi(idade) > 100);

        // Verifica se o usuário deseja encerrar a pesquisa
        if (idade[0] == '-' && idade[1] == '1' && idade[2] == '\0') {
            // Se for "-1", sair do loop
            break;
        }

        // Validação do salário
        do {
            printf("Salario (valor nao negativo): ");
            scanf("%f", &salario);
        } while (salario < 0);

        // Contabiliza habitantes
        totalHabitantes++;

        // Verifica critérios para a estatística específica
        if (sexo == 'f' && atoi(idade) >= 18 && atoi(idade) <= 35 && corOlhos == 'c' && corCabelos == 'c') {
            mulheresCastanhasCastanhasEntre18e35++;
        }
    }

    // Calcula a porcentagem
    float porcentagem = (float)mulheresCastanhasCastanhasEntre18e35 / totalHabitantes * 100;

    // Imprime as estatísticas
    printf("\nEstatisticas:\n");
    printf("Total de habitantes: %d\n", totalHabitantes);
    printf("Porcentagem de mulheres entre 18 e 35 anos, com olhos e cabelos castanhos: %.2f%%\n", porcentagem);

    return 0;
}
