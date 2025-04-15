#include <stdio.h>

// Desafio Super Trunfo - Cadastro de Cidades

int main() {
    int populacao,populacao2;
    float area, area2;
    float PIB, PIB2;
    int pontosturisticos, pontosturisticos2;
    char estado[3], estado2[3];       // Sigla do estado (2 letras + \0)
    char codigo[20], codigo2[20];      // Código identificador
    char nomecidade[50],nomecidade2[50];  // Nome da cidade com espaço suficiente

    // Leitura dos dados
    printf("Cadastre a primeira carta: \n");
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






    printf("\nCadastre a segunda carta: \n");
    printf("Digite a sigla do estado (ex: SP): \n");
    scanf("%s", estado2);

    printf("Digite um número identificador para a cidade: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nomecidade2);  // Use " %[^\n]" se quiser aceitar nomes com espaço

    printf("Digite o número de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a área da cidade (em km²): \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões): \n");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pontosturisticos2);

    // Exibição dos dados cadastrados
    printf("\n--- Dados da primeira cidade Cadastrada ---\n");
    printf("Estado: %s\n", estado);
    printf("Código da cidade: %s\n", codigo);
    printf("Nome da cidade: %s\n", nomecidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2f bilhões\n", PIB);
    printf("Pontos turísticos: %d\n", pontosturisticos);

    printf("\n--- Dados da segunda cidade Cadastrada ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código da cidade: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", PIB2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);


    return 0;
}
