// Programa: Cadastra e exibe duas cartas do Super Trunfo (cidades)
// Autor: Reinaldo Rodrigues — RA: 202508502933

#include <stdio.h>

int main() {
        
    // Declaração das variáveis para a Carta 1
    char estado1;           //Letra A-H do estado
    char codigo1[4];        // Código no formato A01 (3 chars + '\0')
    char cidade1[50];       // Nome da cidade (até 49 chars)
    int populacao1;         // Habitantes
    float area1;            // Área em km^2
    float pib1;             // PIB em bilhões de reais
    int pontosTuristicos1;  // Qtde de pontos turísticos

    // Declaração das variáveis para a Carta 2
    char estado2;           // Letra A-H do estado
    char codigo2[4];        // Código no formato A01 (3 chars + '\0')
    char cidade2[50];       // Nome da cidade (até 49 chars)
    int populacao2;         // Habitantes
    float area2;            // Área em km^2
    float pib2;             // PIB em bilhões de reais
    int pontosTuristicos2;  // Qtde de pontos turísticos

    // Entrada dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1); // permite ler nomes com espaços

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada dos dados da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição das informações
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    return 0;
}
