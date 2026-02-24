#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Nivel Aventureiro
// Menu interativo usando switch
// Comparacao usando if-else e if aninhado

int main() {

    // =============================
    // Dados das Cartas (já cadastradas)
    // =============================

    // Carta 1
    char pais1[50] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 1.92; // trilhoes
    int pontos1 = 50;
    float densidade1 = populacao1 / area1;

    // Carta 2
    char pais2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 0.63; // trilhoes
    int pontos2 = 30;
    float densidade2 = populacao2 / area2;

    int opcao;

    // =============================
    // MENU
    // =============================

    printf("===== SUPER TRUNFO - PAISES =====\n");
    printf("Escolha o atributo para comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO =====\n");

    switch(opcao) {

        case 1:
            printf("Atributo escolhido: Populacao\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Atributo escolhido: Area\n");
            printf("%s: %.2f\n", pais1, area1);
            printf("%s: %.2f\n", pais2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", pais1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Atributo escolhido: PIB\n");
            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n", pais2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turisticos\n");
            printf("%s: %d\n", pais1, pontos1);
            printf("%s: %d\n", pais2, pontos2);

            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pontos2 > pontos1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade Demografica\n");
            printf("%s: %.2f\n", pais1, densidade1);
            printf("%s: %.2f\n", pais2, densidade2);

            // Regra invertida (menor vence)
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida! Escolha um numero de 1 a 5.\n");
    }

    return 0;
}
