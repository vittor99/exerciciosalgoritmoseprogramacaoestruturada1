#include <stdio.h>

char validaSexo(char sexo) {
    if (sexo != 'M' && sexo != 'F') {
        printf("Sexo inválido. Tente novamente.\n");
        return 0;
    }
    return 1;
}

double validaSalario(double salario) {
    if (salario <= 1.0) {
        printf("Salário inválido. Tente novamente.\n");
        return 0;
    }
    return 1;
}

char* classificaSalario(double salario) {
    if (salario < 1400.0) {
        return "Abaixo do salário mínimo";
    } else if (salario == 1400.0) {
        return "Igual ao salário mínimo";
    } else {
        return "Acima do salário mínimo";
    }
}

void mostraClassifica(char sexo, double salario) {
    printf("Sexo: %s\n", sexo == 'M' ? "Masculino" : "Feminino");
    printf("Salário: R$ %.2f\n", salario);
    printf("Classificação: %s\n", classificaSalario(salario));
}

int main() {
    char sexo;
    double salario;
    int abaixo = 0, acima = 0;

    printf("Digite o valor do salário (-1 para sair): ");
    scanf("%lf", &salario);
    while (salario != -1) {
        printf("Digite o sexo do assalariado (M/F): ");
        scanf(" %c", &sexo);
        if (validaSalario(salario) && validaSexo(sexo)) {
            mostraClassifica(sexo, salario);
            if (salario < 1400.0) {
                abaixo++;
            } else if (salario > 1400.0) {
                acima++;
            }
        }
        printf("Digite o valor do salário (-1 para sair): ");
        scanf("%lf", &salario);
    }

    printf("Quantidade de assalariados com salário abaixo do salário mínimo: %d\n", abaixo);
    printf("Quantidade de assalariados com salário acima do salário mínimo: %d\n", acima);

    return 0;
}
