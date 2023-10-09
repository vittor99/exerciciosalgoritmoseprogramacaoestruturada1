#include <stdio.h>

int main() {
    char nome[50], sexo;
    float altura, peso;
    int num_homens = 0, num_mulheres = 0;
    float soma_altura_homens = 0, soma_altura_mulheres = 0, soma_altura_grupo = 0;
    float soma_peso_homens = 0, soma_peso_mulheres = 0, soma_peso_grupo = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o nome da pessoa %d: ", i);
        scanf(" %[^\n]s", nome); // Usamos %[^\n]s para ler todo o nome com espaços.

        printf("Digite o sexo da pessoa %d (M/F): ", i);
        scanf(" %c", &sexo);

        printf("Digite a altura (em metros) da pessoa %d: ", i);
        scanf("%f", &altura);

        printf("Digite o peso (em quilogramas) da pessoa %d: ", i);
        scanf("%f", &peso);

        // Atualiza as estatísticas com base no sexo
        if (sexo == 'M' || sexo == 'm') {
            num_homens++;
            soma_altura_homens += altura;
            soma_peso_homens += peso;
        } else if (sexo == 'F' || sexo == 'f') {
            num_mulheres++;
            soma_altura_mulheres += altura;
            soma_peso_mulheres += peso;
        }

        soma_altura_grupo += altura;
        soma_peso_grupo += peso;
    }

    // Calcula as médias
    float media_altura_homens = num_homens > 0 ? soma_altura_homens / num_homens : 0;
    float media_altura_mulheres = num_mulheres > 0 ? soma_altura_mulheres / num_mulheres : 0;
    float media_altura_grupo = soma_altura_grupo / 10;
    float media_peso_homens = num_homens > 0 ? soma_peso_homens / num_homens : 0;
    float media_peso_mulheres = num_mulheres > 0 ? soma_peso_mulheres / num_mulheres : 0;
    float media_peso_grupo = soma_peso_grupo / 10;

    // Exibe as estatísticas
    printf("\nEstatísticas:\n");
    printf("Número de homens: %d\n", num_homens);
    printf("Número de mulheres: %d\n", num_mulheres);
    printf("Altura média dos homens: %.2f metros\n", media_altura_homens);
    printf("Altura média das mulheres: %.2f metros\n", media_altura_mulheres);
    printf("Altura média do grupo: %.2f metros\n", media_altura_grupo);
    printf("Peso médio dos homens: %.2f quilogramas\n", media_peso_homens);
    printf("Peso médio das mulheres: %.2f quilogramas\n", media_peso_mulheres);
    printf("Peso médio do grupo: %.2f quilogramas\n", media_peso_grupo);

}
