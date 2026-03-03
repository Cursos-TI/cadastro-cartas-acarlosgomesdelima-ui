#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  //variaveis primeira carta
  char cidade [50], codigo[50], estado[50];
  int população, pturisticos;
  float pib, area;

  //variaveis segunda carta
  char cidade1[50], codigo1[50], estado1[50];
  int população1, pturisticos1;
  float pib1, area1;

  // Área para entrada de dados

  //coleta de dados primeira carta
  printf ("===============================\n");
  printf ("==BEM VINDO AO SUPER TRUNFO!!==\n");
  printf ("===============================\n");

  printf ("==CADASTRO DE CARTAS==\n");
  printf ("cadastre a primeira carta\n");

  printf ("estado:\n");
  scanf ("%s", estado);

  printf ("codigo:\n");
  scanf ("%s", codigo);

  printf ("nome da cidade:\n");
  scanf ("%s", cidade);

  printf ("população: \n");
  scanf ("%i", &população);

  printf ("Àrea: \n");
  scanf ("%f", &area);
  
  printf ("PIB: \n");
  scanf ("%f", &pib);

  printf ("numero de pontos turisticos:\n");
  scanf ("%i", &pturisticos);

  //cadastro segunda carta
  printf ("\ncadastre a segunda carta\n");

  printf ("estado:\n");
  scanf ("%s", estado1);

  printf ("codigo:\n");
  scanf ("%s", codigo1);

  printf ("nome da cidade:\n");
  scanf ("%s", cidade1);

  printf ("população: \n");
  scanf ("%i", &população1);

  printf ("Àrea: \n");
  scanf ("%f", &area1);
  
  printf ("PIB: \n");
  scanf ("%f", &pib1);

  printf ("numero de pontos turisticos:\n");
  scanf ("%i", &pturisticos1);

  // Área para exibição dos dados da cidade
  // resultado dos cadastros das cartas
  printf ("\n=================================\n");
  printf ("==SUAS CARTAS CADASTRADAS SÃO: ==");
  printf ("\n=================================\n");
  printf ("==>carta 01<==\n");
  printf ("Estado: %s\n", estado);
  printf ("Codigo: %s\n", codigo);
  printf ("Nome da cidade: %s\n", cidade);
  printf ("População: %i\n", população);
  printf ("Area: %.2fm²\n", area);
  printf ("PIB: R$%.2f\n", pib);
  printf ("Numero de pontos turisticos: %i\n", pturisticos);
  printf ("==================================\n");

  printf ("\n==================================\n");
  printf ("==>carta 02<==\n");
  printf ("Estado: %s\n", estado1);
  printf ("Codigo: %s\n", codigo1);
  printf ("Nome da cidade: %s\n", cidade1);
  printf ("População: %i\n", população1);
  printf ("Area: %.2fm2\n", area1);
  printf ("PIB: R$%.2f\n", pib1);
  printf ("Numero de pontos turisticos: %i\n", pturisticos1);
  printf ("==================================\n");




return 0;
} 
