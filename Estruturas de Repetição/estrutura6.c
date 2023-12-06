#include <stdio.h>

int main() {
    // Variáveis
    int opcao;
    int quantidade;
    float total = 0.0;

    // Loop principal para o menu
    do {
        // Apresenta o menu de frutas
        printf("\nMenu de Frutas:\n");
        printf("1 => ABACAXI – 5,00 a unidade\n");
        printf("2 => MAÇA – 1,00 a unidade\n");
        printf("3 => PERA – 4,00 a unidade\n");
        printf("0 => Sair\n");

        // Solicita a escolha do usuário
        printf("\nEscolha uma fruta (ou 0 para sair): ");
        scanf("%d", &opcao);

        // Processa a escolha do usuário
        switch (opcao) {
            case 1:
                printf("Digite a quantidade de abacaxis: ");
                scanf("%d", &quantidade);
                total += quantidade * 5.0;
                break;
            case 2:
                printf("Digite a quantidade de maças: ");
                scanf("%d", &quantidade);
                total += quantidade * 1.0;
                break;
            case 3:
                printf("Digite a quantidade de peras: ");
                scanf("%d", &quantidade);
                total += quantidade * 4.0;
                break;
            case 0:
                printf("Saindo do menu...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 0);

    // Imprime o total da compra
    printf("Valor total da compra: %.2f\n", total);

    return 0;
}
