#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Produto {
    int codigo;
    char descricao[50];
    int quantidade;
    double valor;
    struct Produto* proximo;
} Produto;

Produto* inicializaLista() {
    return NULL;
}

Produto* adicionaProduto(Produto* lista) {
    Produto* novo = (Produto*) malloc(sizeof(Produto));
    printf("Digite o código do produto: ");
    scanf("%d", &novo->codigo);
    printf("Digite a descrição do produto: ");
    scanf(" %[^\n]", novo->descricao);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &novo->quantidade);
    printf("Digite o valor do produto: ");
    scanf("%lf", &novo->valor);
    novo->proximo = lista;
    return novo;
}

void imprimeRelatorio(Produto* lista) {
    Produto* p;
    for (p = lista; p != NULL; p = p->proximo) {
        printf("Código: %d\n", p->codigo);
        printf("Descrição: %s\n", p->descricao);
        printf("Quantidade: %d\n", p->quantidade);
        printf("Valor: %.2f\n", p->valor);
        printf("\n");
    }
}

Produto* pesquisaProduto(Produto* lista, int codigo) {
    Produto* p;
    for (p = lista; p != NULL; p = p->proximo) {
        if (p->codigo == codigo)
            return p;
    }
    return NULL;
}

Produto* removeProduto(Produto* lista, int codigo) {
    Produto* anterior = NULL;
    Produto* atual = lista;

    while (atual != NULL && atual->codigo != codigo) {
        anterior = atual;
        atual = atual->proximo;
    }

    if (atual == NULL) {
        printf("Produto não encontrado.\n");
        return lista;
    }

    if (anterior == NULL) {
        lista = atual->proximo;
    } else {
        anterior->proximo = atual->proximo;
    }

    free(atual);
    return lista;
}

int main() {
    Produto* lista = inicializaLista();
    int opcao, codigo;

    do {
        printf("1. Adicionar produto\n");
        printf("2. Imprimir relatório\n");
        printf("3. Pesquisar produto\n");
        printf("4. Remover produto\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                lista = adicionaProduto(lista);
                break;
            case 2:
                imprimeRelatorio(lista);
                break;
            case 3:
                printf("Digite o código do produto a ser pesquisado: ");
                scanf("%d", &codigo);
                Produto* p = pesquisaProduto(lista, codigo);
                if (p != NULL) {
                    printf("Produto encontrado: %s\n", p->descricao);
                } else {
                    printf("Produto não encontrado.\n");
                }
                break;
            case 4:
                printf("Digite o código do produto a ser removido: ");
                scanf("%d", &codigo);
                lista = removeProduto(lista, codigo);
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 5);

    return 0;
}
