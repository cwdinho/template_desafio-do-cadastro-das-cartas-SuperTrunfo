#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: Criar cartas e comparar um atributo utilizando if

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Carta 1
  char estado1[3];
  char codigo1[10];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;
  float densidade1;
  float pibPerCapita1;

  // Carta 2
  char estado2[3];
  char codigo2[10];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;
  float densidade2;
  float pibPerCapita2;


  // Área para entrada de dados

  printf("=== CARTA 1 ===\n");

  printf("Estado: ");
  scanf("%s", estado1);

  printf("Codigo: ");
  scanf("%s", codigo1);

  printf("Nome da cidade: ");
  scanf("%s", cidade1);

  printf("Populacao: ");
  scanf("%d", &populacao1);

  printf("Area: ");
  scanf("%f", &area1);

  printf("PIB: ");
  scanf("%f", &pib1);

  printf("Numero de pontos turisticos: ");
  scanf("%d", &pontos1);


  printf("\n=== CARTA 2 ===\n");

  printf("Estado: ");
  scanf("%s", estado2);

  printf("Codigo: ");
  scanf("%s", codigo2);

  printf("Nome da cidade: ");
  scanf("%s", cidade2);

  printf("Populacao: ");
  scanf("%d", &populacao2);

  printf("Area: ");
  scanf("%f", &area2);

  printf("PIB: ");
  scanf("%f", &pib2);

  printf("Numero de pontos turisticos: ");
  scanf("%d", &pontos2);


  // Cálculo da densidade populacional e PIB per capita

  densidade1 = populacao1 / area1;
  pibPerCapita1 = pib1 / populacao1;

  densidade2 = populacao2 / area2;
  pibPerCapita2 = pib2 / populacao2;


  // Área para exibição dos dados da cidade

  printf("\n--- DADOS DAS CARTAS ---\n");

  printf("\nCarta 1 - %s (%s)\n", cidade1, estado1);
  printf("Populacao: %d\n", populacao1);
  printf("Area: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turisticos: %d\n", pontos1);
  printf("Densidade Populacional: %.2f\n", densidade1);
  printf("PIB per Capita: %.2f\n", pibPerCapita1);

  printf("\nCarta 2 - %s (%s)\n", cidade2, estado2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turisticos: %d\n", pontos2);
  printf("Densidade Populacional: %.2f\n", densidade2);
  printf("PIB per Capita: %.2f\n", pibPerCapita2);


  // Comparação de cartas (Atributo escolhido: População)

  printf("\n=== COMPARACAO (Atributo: Populacao) ===\n");

  if (populacao1 > populacao2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
  }
  else if (populacao2 > populacao1) {
    printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
  }
  else {
    printf("Resultado: Empate!\n");
  }

  return 0;
}
