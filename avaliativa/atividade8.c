#include <stdio.h>

int main() {
    float salario, media_salario = 0, maior_salario = 0;
    int num_filhos, total_habitantes = 0, num_filhos_total = 0, num_salario_ate_100 = 0;

    printf("Digite o salário do habitante (ou um valor negativo para encerrar): ");
    scanf("%f", &salario);

    while (salario >= 0) {
        printf("Digite o número de filhos do habitante: ");
        scanf("%d", &num_filhos);

        // Calcula a média do salário e do número de filhos
        media_salario += salario;
        num_filhos_total += num_filhos;
        total_habitantes++;

        // Verifica o maior salário
        if (salario > maior_salario) {
            maior_salario = salario;
        }

        // Verifica se o salário é menor ou igual a R$100,00
        if (salario <= 100) {
            num_salario_ate_100++;
        }

        printf("Digite o salário do habitante (ou um valor negativo para encerrar): ");
        scanf("%f", &salario);
    }

    if (total_habitantes > 0) {
        // Calcula a média do salário e do número de filhos
        media_salario /= total_habitantes;
        float media_filhos = (float)num_filhos_total / total_habitantes;

        // Calcula o percentual de pessoas com salário até R$100,00
        float percentual_salario_ate_100 = (float)num_salario_ate_100 / total_habitantes * 100;

        // Exibe os resultados
        printf("a) Média do salário da população: %.2f\n", media_salario);
        printf("b) Média do número de filhos: %.2f\n", media_filhos);
        printf("c) Maior salário: %.2f\n", maior_salario);
        printf("d) Percentual de pessoas com salário até R$100,00: %.2f%%\n", percentual_salario_ate_100);
    } else {
        printf("Nenhum dado foi inserido.\n");
    }

   
}
