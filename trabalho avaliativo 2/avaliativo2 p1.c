#include <stdio.h>

int validaQuantidade(int quantidade) {
    if (quantidade < 0) {
        printf("Quantidade inválida. Tente novamente.\n");
        return 0;
    }
    return 1;
}

double calculaSalario(int quantidade) {
    double salario = 600.0;
    if (quantidade > 50 && quantidade <= 80) {
        salario += (quantidade - 50) * 0.5;
    } else if (quantidade > 80) {
        salario += 30 * 0.5 + (quantidade - 80) * 0.75;
    }
    return salario;
}

void mostraFinal(double salario) {
    printf("O salário total é R$ %.2f\n", salario);
}

int main() {
    int quantidade;
    double salario;

    printf("Digite a quantidade de peças fabricadas (-1 para sair): ");
    scanf("%d", &quantidade);

    while (quantidade != -1) {
        if (validaQuantidade(quantidade)) {
            salario = calculaSalario(quantidade);
            mostraFinal(salario);
        }
        printf("Digite a quantidade de peças fabricadas (-1 para sair): ");
        scanf("%d", &quantidade);
    }

    return 0;
}
