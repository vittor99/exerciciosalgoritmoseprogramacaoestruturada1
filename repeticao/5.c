#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os votos
struct Voto {
    char nome[50];
    int idade;
    char sexo;
    int voto;
};

// Função para encontrar a jogadora mais votada
void encontrarMaisVotada(struct Voto votos[], int totalVotos, int contagemVotos[]) {
    int maxVotos = 0;
    
    // Encontre o número máximo de votos
    for (int i = 0; i < totalVotos; i++) {
        if (contagemVotos[votos[i].voto] > maxVotos) {
            maxVotos = contagemVotos[votos[i].voto];
        }
    }

    // Exiba todas as jogadoras que receberam o número máximo de votos
    printf("\nJogadora(s) mais votada(s):");
    for (int i = 1; i <= 5; i++) {
        if (contagemVotos[i] == maxVotos) {
            printf("\nJogadora %d - ", i);
            switch (i) {
                case 1:
                    printf("Sam Kerr - Austrália");
                    break;
                case 2:
                    printf("Alex Morgan - Estados Unidos");
                    break;
                case 3:
                    printf("Dzsenifer Marozsan - Alemanha");
                    break;
                case 4:
                    printf("Amandine Henry - França");
                    break;
                case 5:
                    printf("Marta Vieira - Brasil");
                    break;
            }
        }
    }
    printf("\n");
}

int main() {
    struct Voto votos[300]; // Array para armazenar os votos
    int totalVotos = 0;
    int contagemVotos[6] = {0}; // Array para contar os votos para cada jogadora

    printf("Bem-vindo à pesquisa para escolher a melhor jogadora da Copa do Mundo de Futebol Feminino!\n");

    while (totalVotos < 50 || totalVotos > 300) {
        printf("\nDigite seu nome: ");
        scanf(" %s", votos[totalVotos].nome);

        printf("Digite sua idade (maior que 12 anos): ");
        scanf("%d", &votos[totalVotos].idade);

        if (votos[totalVotos].idade <= 12) {
            printf("Idade deve ser maior que 12 anos. Tente novamente.\n");
            continue;
        }

        printf("Digite seu sexo (M para masculino, F para feminino): ");
        scanf(" %c", &votos[totalVotos].sexo);

        if (votos[totalVotos].sexo != 'M' && votos[totalVotos].sexo != 'F') {
            printf("Sexo deve ser M ou F. Tente novamente.\n");
            continue;
        }

        printf("Escolha uma jogadora (1-5):\n");
        printf("1 - Sam Kerr - Austrália\n");
        printf("2 - Alex Morgan - Estados Unidos\n");
        printf("3 - Dzsenifer Marozsan - Alemanha\n");
        printf("4 - Amandine Henry - França\n");
        printf("5 - Marta Vieira - Brasil\n");
        scanf("%d", &votos[totalVotos].voto);

        if (votos[totalVotos].voto < 1 || votos[totalVotos].voto > 5) {
            printf("Opção de voto inválida. Tente novamente.\n");
            continue;
        }

        contagemVotos[votos[totalVotos].voto]++;
        totalVotos++;

        if (totalVotos >= 50) {
            char continuar;
            printf("\nDeseja encerrar a pesquisa? (S para sim, N para não): ");
            scanf(" %c", &continuar);

            if (continuar == 'S' || continuar == 's') {
                break;
            }
        }
    }

    // Exibir a quantidade de votos que cada jogadora recebeu
    for (int i = 1; i <= 5; i++) {
        printf("Jogadora %d - ", i);
        switch (i) {
            case 1:
                printf("Sam Kerr - Austrália");
                break;
            case 2:
                printf("Alex Morgan - Estados Unidos");
                break;
            case 3:
                printf("Dzsenifer Marozsan - Alemanha");
                break;
            case 4:
                printf("Amandine Henry - França");
                break;
            case 5:
                printf("Marta Vieira - Brasil");
                break;
        }
        printf(": %d votos\n", contagemVotos[i]);
    }

    // Exibir o nome, idade e sexo de todas as pessoas que participaram da pesquisa
    // separando por sexo, maior de idade e menor de idade
    printf("\nPessoas que participaram da pesquisa:\n");
    printf("Maior de Idade:\n");
    for (int i = 0; i < totalVotos; i++) {
        if (votos[i].idade >= 18) {
            printf("Nome: %s, Idade: %d, Sexo: %c\n", votos[i].nome, votos[i].idade, votos[i].sexo);
        }
    }

    printf("\nMenor de Idade:\n");
    for (int i = 0; i < totalVotos; i++) {
        if (votos[i].idade < 18) {
            printf("Nome: %s, Idade: %d, Sexo: %c\n", votos[i].nome, votos[i].idade, votos[i].sexo);
        }
    }

    // Exibir o nome das pessoas maior de idade que votaram na Marta Vieira (jogadora 5)
    printf("\nPessoas maiores de idade que votaram na Marta Vieira:\n");
    for (int i = 0; i < totalVotos; i++) {
        if (votos[i].idade >= 18 && votos[i].voto == 5) {
            printf("Nome: %s\n", votos[i].nome);
        }
    }

    // Exibir a quantidade de mulheres que participaram da pesquisa
    int mulheres = 0;
    for (int i = 0; i < totalVotos; i++) {
        if (votos[i].sexo == 'F') {
            mulheres++;
        }
    }
    printf("\nQuantidade de mulheres que participaram da pesquisa: %d\n", mulheres);

    
}
