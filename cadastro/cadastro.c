#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_USERS 1000

// Definição da struct para armazenar informações do usuário
struct Usuario {
    int id;
    char nome[50];
    char email[50];
    char sexo[15];
    char endereco[100];
    double altura;
    int vacina;
};

// Função para gerar um ID único para cada usuário
int gerarID() {
    return rand();
}

// Função para adicionar um usuário
void adicionarUsuario(struct Usuario usuarios[], int *numUsuarios) {
    if (*numUsuarios < MAX_USERS) {
        struct Usuario novoUsuario;
        novoUsuario.id = gerarID();

        printf("Digite o nome completo: ");
        scanf(" %[^\n]s", novoUsuario.nome);

        printf("Digite o email: ");
        scanf(" %s", novoUsuario.email);

        // Validar o campo de email
        if (strstr(novoUsuario.email, "@") == NULL) {
            printf("Email inválido. Deve conter o caractere '@'.\n");
            return;
        }

        printf("Digite o sexo (Feminino, Masculino ou Indiferente): ");
        scanf(" %s", novoUsuario.sexo);

        // Validar o campo de sexo
        if (strcmp(novoUsuario.sexo, "Feminino") != 0 &&
            strcmp(novoUsuario.sexo, "Masculino") != 0 &&
            strcmp(novoUsuario.sexo, "Indiferente") != 0) {
            printf("Sexo inválido. Escolha entre Feminino, Masculino ou Indiferente.\n");
            return;
        }

        printf("Digite o endereço: ");
        scanf(" %[^\n]s", novoUsuario.endereco);

        printf("Digite a altura (entre 1 e 2 metros): ");
        scanf("%lf", &novoUsuario.altura);

        // Validar o campo de altura
        if (novoUsuario.altura < 1 || novoUsuario.altura > 2) {
            printf("Altura inválida. Deve estar entre 1 e 2 metros.\n");
            return;
        }

        printf("O usuário foi vacinado? (1 para sim, 0 para não): ");
        scanf("%d", &novoUsuario.vacina);

        usuarios[*numUsuarios] = novoUsuario;
        (*numUsuarios)++;
        printf("Usuário adicionado com sucesso.\n");
    } else {
        printf("Limite máximo de usuários atingido.\n");
    }
}

// Função para editar um usuário pelo ID
void editarUsuario(struct Usuario usuarios[], int numUsuarios) {
    int id;
    printf("Digite o ID do usuário que deseja editar: ");
    scanf("%d", &id);

    int encontrado = 0;
    for (int i = 0; i < numUsuarios; i++) {
        if (usuarios[i].id == id) {
            printf("Digite o novo nome completo: ");
            scanf(" %[^\n]s", usuarios[i].nome);

            printf("Digite o novo email: ");
            scanf(" %s", usuarios[i].email);

            // Validar o campo de email
            if (strstr(usuarios[i].email, "@") == NULL) {
                printf("Email inválido. Deve conter o caractere '@'.\n");
                return;
            }

            printf("Digite o novo sexo (Feminino, Masculino ou Indiferente): ");
            scanf(" %s", usuarios[i].sexo);

            // Validar o campo de sexo
            if (strcmp(usuarios[i].sexo, "Feminino") != 0 &&
                strcmp(usuarios[i].sexo, "Masculino") != 0 &&
                strcmp(usuarios[i].sexo, "Indiferente") != 0) {
                printf("Sexo inválido. Escolha entre Feminino, Masculino ou Indiferente.\n");
                return;
            }

            printf("Digite o novo endereço: ");
            scanf(" %[^\n]s", usuarios[i].endereco);

            printf("Digite a nova altura (entre 1 e 2 metros): ");
            scanf("%lf", &usuarios[i].altura);

            // Validar o campo de altura
            if (usuarios[i].altura < 1 || usuarios[i].altura > 2) {
                printf("Altura inválida. Deve estar entre 1 e 2 metros.\n");
                return;
            }

            printf("O usuário foi vacinado? (1 para sim, 0 para não): ");
            scanf("%d", &usuarios[i].vacina);

            printf("Usuário editado com sucesso.\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Usuário com ID %d não encontrado.\n", id);
    }
}

// Função para excluir um usuário pelo ID
void excluirUsuario(struct Usuario usuarios[], int *numUsuarios) {
    int id;
    printf("Digite o ID do usuário que deseja excluir: ");
    scanf("%d", &id);

    int encontrado = 0;
    for (int i = 0; i < *numUsuarios; i++) {
        if (usuarios[i].id == id) {
            // Substituir o usuário a ser excluído pelo último usuário no vetor
            usuarios[i] = usuarios[(*numUsuarios) - 1];
            (*numUsuarios)--;
            printf("Usuário excluído com sucesso.\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Usuário com ID %d não encontrado.\n", id);
    }
}

// Função para buscar um usuário pelo email
void buscarUsuarioPorEmail(struct Usuario usuarios[], int numUsuarios) {
    char emailBusca[50];
    printf("Digite o email do usuário que deseja buscar: ");
    scanf(" %s", emailBusca);

    int encontrado = 0;
    for (int i = 0; i < numUsuarios; i++) {
        if (strcmp(usuarios[i].email, emailBusca) == 0) {
            printf("ID: %d\n", usuarios[i].id);
            printf("Nome: %s\n", usuarios[i].nome);
            printf("Email: %s\n", usuarios[i].email);
            printf("Sexo: %s\n", usuarios[i].sexo);
            printf("Endereço: %s\n", usuarios[i].endereco);
            printf("Altura: %.2lf\n", usuarios[i].altura);
            printf("Vacinado: %s\n", usuarios[i].vacina ? "Sim" : "Não");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Usuário com email %s não encontrado.\n", emailBusca);
    }
}

// Função para imprimir todos os usuários
void imprimirUsuarios(struct Usuario usuarios[], int numUsuarios) {
    printf("\nLista de Usuários:\n");
    for (int i = 0; i < numUsuarios; i++) {
        printf("ID: %d\n", usuarios[i].id);
        printf("Nome: %s\n", usuarios[i].nome);
        printf("Email: %s\n", usuarios[i].email);
        printf("Sexo: %s\n", usuarios[i].sexo);
        printf("Endereço: %s\n", usuarios[i].endereco);
        printf("Altura: %.2lf\n", usuarios[i].altura);
        printf("Vacinado: %s\n", usuarios[i].vacina ? "Sim" : "Não");
        printf("------------------------\n");
    }
}

int main() {
    struct Usuario usuarios[MAX_USERS];
    int numUsuarios = 0;
    srand(time(NULL));

    char opcao;
    do {
        printf("\nEscolha uma opção:\n");
        printf("1 - Adicionar usuário\n");
        printf("2 - Editar usuário\n");
        printf("3 - Excluir usuário\n");
        printf("4 - Buscar usuário por email\n");
        printf("5 - Imprimir todos os usuários\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case '1':
                adicionarUsuario(usuarios, &numUsuarios);
                break;
            case '2':
                editarUsuario(usuarios, numUsuarios);
                break;
            case '3':
                excluirUsuario(usuarios, &numUsuarios);
                break;
            case '4':
                buscarUsuarioPorEmail(usuarios, numUsuarios);
                break;
            case '5':
                imprimirUsuarios(usuarios, numUsuarios);
                break;
            case '0':
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != '0');

    return 0;
}
