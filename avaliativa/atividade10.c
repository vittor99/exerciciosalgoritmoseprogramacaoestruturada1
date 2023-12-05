#include <stdio.h>
#include <string.h>

// Definição da estrutura de dados para armazenar informações da cidade
struct Cidade {
    char nome[50];
    char estado[3];
    int veiculos;
    int acidentes;
    float indice_acidentes;
};

int main() {
    // Número de cidades
    int num_cidades = 200;
    
    // Exemplo de declaração e inicialização de um array de cidades
    struct Cidade cidades[200] = {
        {"Cidade A", "RS", 10000, 20, 0.0},
        {"Cidade B", "SC", 15000, 10, 0.0},
        // Adicione os dados de todas as cidades aqui
    };

    // Calcula o índice de acidentes para cada cidade
    for (int i = 0; i < num_cidades; i++) {
        cidades[i].indice_acidentes = (float)cidades[i].acidentes / cidades[i].veiculos;
    }

    // Encontra a cidade com o maior e o menor índice de acidentes
    int cidade_maior_indice = 0;
    int cidade_menor_indice = 0;

    for (int i = 1; i < num_cidades; i++) {
        if (cidades[i].indice_acidentes > cidades[cidade_maior_indice].indice_acidentes) {
            cidade_maior_indice = i;
        }
        if (cidades[i].indice_acidentes < cidades[cidade_menor_indice].indice_acidentes) {
            cidade_menor_indice = i;
        }
    }

    printf("Cidade com maior índice de acidentes: %s (%.2f)\n", cidades[cidade_maior_indice].nome, cidades[cidade_maior_indice].indice_acidentes);
    printf("Cidade com menor índice de acidentes: %s (%.2f)\n", cidades[cidade_menor_indice].nome, cidades[cidade_menor_indice].indice_acidentes);

    // Calcula a média de veículos nas cidades brasileiras
    int total_veiculos = 0;
    for (int i = 0; i < num_cidades; i++) {
        total_veiculos += cidades[i].veiculos;
    }
    float media_veiculos = (float)total_veiculos / num_cidades;
    printf("Média de veículos nas cidades brasileiras: %.2f\n", media_veiculos);

    // Calcula a média de acidentes com vítimas no Rio Grande do Sul
    int total_acidentes_rs = 0;
    int num_cidades_rs = 0;

    for (int i = 0; i < num_cidades; i++) {
        if (strcmp(cidades[i].estado, "RS") == 0) {
            total_acidentes_rs += cidades[i].acidentes;
            num_cidades_rs++;
        }
    }

    if (num_cidades_rs > 0) {
        float media_acidentes_rs = (float)total_acidentes_rs / num_cidades_rs;
        printf("Média de acidentes com vítimas no Rio Grande do Sul: %.2f\n", media_acidentes_rs);
    } else {
        printf("Não foram encontradas cidades no Rio Grande do Sul.\n");
    }

   
}
