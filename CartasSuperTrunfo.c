#include <stdio.h>

int main() {

   // Variáveis Carta 01
   char cidade[50], codigo[50], estado[50];
    int populacao, pturisticos;
    float pib, area, densidade_populacional, pib_per_capita;

    // Variáveis Carta 02
    char cidade1[50], codigo1[50], estado1[50];
    int populacao1, pturisticos1;
    float pib1, area1, densidade_populacional1, pib_per_capita1;

    printf("===============================\n");
    printf("==BEM VINDO AO SUPER TRUNFO!!==\n");
    printf("===============================\n");

    // CADASTRO CARTA 01
    printf("\n== CADASTRO DA PRIMEIRA CARTA ==\n");
    printf("Estado: ");
    scanf(" %s", estado);
    printf("Codigo: ");
    scanf(" %s", codigo);
    printf("Nome da cidade: ");
    scanf(" %s", cidade); // Permite espaços no nome
    printf("Populacao: ");
    scanf("%d", &populacao);
    printf("Area (km2): ");
    scanf("%f", &area);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib);
    printf("Pontos turisticos: ");
    scanf("%d", &pturisticos);

    // Cálculos Carta 01
    densidade_populacional = (float)populacao / area;
    pib_per_capita = (pib * 1000000000) / (float)populacao;

    // CADASTRO CARTA 02
    printf("\n== CADASTRO DA SEGUNDA CARTA ==\n");
    printf("Estado: ");
    scanf(" %s", estado1);
    printf("Codigo: ");
    scanf(" %s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %s", cidade1);
    printf("Populacao: ");
    scanf("%d", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pturisticos1);

    // Cálculos Carta 02
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / (float)populacao1;

    // EXIBIÇÃO DOS DADOS
    printf("\n=================================\n");
    printf("==   CARTAS CADASTRADAS        ==\n");
    printf("=================================\n");

    printf("==> CARTA 01 <==\n");
    printf("Estado: %s | Codigo: %s\n", estado, codigo);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf ("PIB (em bilhoes): %.2f\n", pib);
    printf("Densidade: %.2f hab/km2\n", densidade_populacional);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita);

    printf("\n---------------------------------\n");

    printf("==> CARTA 02 <==\n");
    printf("Estado: %s | Codigo: %s\n", estado1, codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB (em bilhoes): %.2f\n", pib1);
    printf("Densidade: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);
    
    printf("\n---------------------------------\n");

    return 0;
}