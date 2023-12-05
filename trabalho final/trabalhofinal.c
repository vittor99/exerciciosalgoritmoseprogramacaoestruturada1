#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Carro {
    char proprietario[50];
    char combustivel[10];
    char modelo[50];
    char cor[10];
    char chassi[17];
    int ano;
    char placa[7];
    struct Carro* prox;
} Carro;

Carro* criar_carro(char* proprietario, char* combustivel, char* modelo, char* cor, char* chassi, int ano, char* placa) {
    Carro* novo_carro = (Carro*)malloc(sizeof(Carro));
    strcpy(novo_carro->proprietario, proprietario);
    strcpy(novo_carro->combustivel, combustivel);
    strcpy(novo_carro->modelo, modelo);
    strcpy(novo_carro->cor, cor);
    strcpy(novo_carro->chassi, chassi);
    novo_carro->ano = ano;
    strcpy(novo_carro->placa, placa);
    novo_carro->prox = NULL;
    return novo_carro;
}

void adicionar_carro(Carro** inicio, Carro* novo_carro) {
    if (*inicio == NULL) {
        *inicio = novo_carro;
    } else {
        Carro* temp = *inicio;
        while (temp->prox != NULL) {
            temp = temp->prox;
        }
        temp->prox = novo_carro;
    }
}

void cadastrar_carro(Carro** inicio) {
    char proprietario[50];
    char combustivel[10];
    char modelo[50];
    char cor[10];
    char chassi[17];
    int ano;
    char placa[7];

    printf("Digite o nome do proprietario: ");
    scanf("%s", proprietario);
    printf("Digite o tipo de combustivel: ");
    scanf("%s", combustivel);
    printf("Digite o modelo do carro: ");
    scanf("%s", modelo);
    printf("Digite a cor do carro: ");
    scanf("%s", cor);
    printf("Digite o numero do chassi: ");
    scanf("%s", chassi);
    printf("Digite o ano do carro: ");
    scanf("%d", &ano);
    printf("Digite a placa do carro EM MAIÚSCULO: ");
    scanf("%s", placa);

    Carro* novo_carro = criar_carro(proprietario, combustivel, modelo, cor, chassi, ano, placa);
    adicionar_carro(inicio, novo_carro);
}

void listar_proprietarios_diesel_2010(Carro* inicio) {
    if (inicio == NULL) {
        printf("A lista está vazia.\n");
        return;
    }
    Carro* temp = inicio;
    while (temp != NULL) {
        if (strcmp(temp->combustivel, "diesel") == 0 && temp->ano >= 2010) {
            printf("%s\n", temp->proprietario);
        }
        temp = temp->prox;
    }
}

void listar_placas_J(Carro* inicio) {
    if (inicio == NULL) {
        printf("A lista está vazia.\n");
        return;
    }
    Carro* temp = inicio;
    while (temp != NULL) {
        if (temp->placa[0] == 'J' && (temp->placa[6] == '0' || temp->placa[6] == '2' || temp->placa[6] == '4' || temp->placa[6] == '7')) {
            printf("%s: %s\n", temp->placa, temp->proprietario);
        }
        temp = temp->prox;
    }
}

void listar_modelo_cor_vogal_par(Carro* inicio) {
    if (inicio == NULL) {
        printf("A lista está vazia.\n");
        return;
    }
    Carro* temp = inicio;
    while (temp != NULL) {
        if ((temp->placa[1] == 'A' || temp->placa[1] == 'E' || temp->placa[1] == 'I' || temp->placa[1] == 'O' || temp->placa[1] == 'U') && ((temp->placa[3] + temp->placa[4] + temp->placa[5] + temp->placa[6]) % 2 == 0)) {
            printf("%s: %s\n", temp->modelo, temp->cor);
        }
        temp = temp->prox;
    }
}

void trocar_proprietario(Carro* inicio, char* chassi, char* novo_proprietario) {
    if (inicio == NULL) {
        printf("A lista está vazia.\n");
        return;
    }
    Carro* temp = inicio;
    while (temp != NULL) {
        if (strcmp(temp->chassi, chassi) == 0 && strchr(temp->placa, '0') == NULL) {
            strcpy(temp->proprietario, novo_proprietario);
        }
        temp = temp->prox;
    }
}

void liberar_lista(Carro* inicio) {
    Carro* temp = inicio;
    while (temp != NULL) {
        Carro* prox = temp->prox;
        free(temp);
        temp = prox;
    }
}

int main() {
    Carro* inicio = NULL;
    int opcao;
    char chassi[17];
    char novo_proprietario[50];

    do {
        printf("\n1. Cadastrar carro\n2. Listar proprietarios de carros a diesel do ano 2010 em diante\n3. Listar placas que comecam com 'J' e terminam com '0', '2', '4' ou '7'\n4. Listar modelo e cor de carros cuja placa tem segunda letra uma vogal e soma dos numeros e par\n5. Trocar proprietario de carro\n6. Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrar_carro(&inicio);
                break;
            case 2:
                listar_proprietarios_diesel_2010(inicio);
                break;
            case 3:
                listar_placas_J(inicio);
                break;
            case 4:
                listar_modelo_cor_vogal_par(inicio);
                break;
            case 5:
                printf("Digite o numero do chassi do carro: ");
                scanf("%s", chassi);
                printf("Digite o nome do novo proprietario: ");
                scanf("%s", novo_proprietario);
                trocar_proprietario(inicio, chassi, novo_proprietario);
                break;
            case 6:
                liberar_lista(inicio);
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 6);

    return 0;
}
