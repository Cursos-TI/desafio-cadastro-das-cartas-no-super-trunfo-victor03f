#include <stdio.h>

// Desafio Super Trunfo - Cadastro de Cidades

int main() {
    int populacao;
    float area;
    float PIB;
    int pontosturisticos;
    char estado[3];       // Sigla do estado (2 letras + \0)
    char codigo[20];      // Código identificador
    char nomecidade[50];  // Nome da cidade com espaço suficiente

    // Leitura dos dados
    printf("Digite a sigla do estado (ex: SP): \n");
    scanf("%s", estado);

    printf("Digite um número identificador para a cidade: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomecidade);  // Use " %[^\n]" se quiser aceitar nomes com espaço

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos);

    // Exibição dos dados cadastrados
    printf("\n--- Dados da Cidade Cadastrada ---\n");
    printf("Estado: %s\n", estado);
    printf("Código da cidade: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", PIB);
    printf("Pontos turísticos: %d\n", pontosturisticos);

    return 0;
}
