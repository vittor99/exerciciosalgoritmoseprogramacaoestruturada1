#include <stdio.h>

int main() {
    int quantidade_otimo = 0;
    int quantidade_bom = 0;
    int quantidade_regular = 0;
    int quantidade_ruim = 0;
    int quantidade_pessimo = 0;
    int soma_idade_ruim = 0;
    int maior_idade_pessimo = 0;
    int maior_idade_otimo = 0;
    int maior_idade_ruim = 0;

    for (int i = 0; i < 100; i++) {
        int idade;
        char opiniao;

        printf("Digite a idade do espectador %d: ", i + 1);
        scanf("%d", &idade);

        printf("Digite a opinião (A/B/C/D/E) do espectador %d: ", i + 1);
        scanf(" %c", &opiniao);

        switch (opiniao) {
            case 'A':
                quantidade_otimo++;
                if (idade > maior_idade_otimo) {
                    maior_idade_otimo = idade;
                }
                break;
            case 'B':
                quantidade_bom++;
                break;
            case 'C':
                quantidade_regular++;
                break;
            case 'D':
                quantidade_ruim++;
                soma_idade_ruim += idade;
                if (idade > maior_idade_ruim) {
                    maior_idade_ruim = idade;
                }
                break;
            case 'E':
                quantidade_pessimo++;
                if (idade > maior_idade_pessimo) {
                    maior_idade_pessimo = idade;
                }
                break;
            default:
                printf("Opinião inválida. Use A/B/C/D/E.\n");
                i--;
        }
    }

    float diferenca_percentual = ((quantidade_bom - quantidade_regular) / (float)quantidade_bom) * 100;
    float media_idade_ruim = quantidade_ruim > 0 ? soma_idade_ruim / (float)quantidade_ruim : 0;

    printf("Quantidade de respostas 'Ótimo': %d\n", quantidade_otimo);
    printf("Diferença percentual entre respostas 'Bom' e 'Regular': %.2f%%\n", diferenca_percentual);
    printf("Média de idade das pessoas que responderam 'Ruim': %.2f anos\n", media_idade_ruim);
    printf("Percentagem de respostas 'Péssimo': %.2f%%\n", (quantidade_pessimo / 100.0) * 100);
    printf("Maior idade que utilizou a opção 'Péssimo': %d anos\n", maior_idade_pessimo);
    printf("Diferença de idade entre a maior idade que respondeu 'Ótimo' e a maior idade que respondeu 'Ruim': %d anos\n", maior_idade_otimo - maior_idade_ruim);

    
}
