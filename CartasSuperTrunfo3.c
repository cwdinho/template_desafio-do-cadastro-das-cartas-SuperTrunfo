#include <stdio.h>
#include <string.h>

// Super Trunfo - Nivel Mestre
// Comparacao com dois atributos
// Uso de switch, if-else, operador ternario e menus dinamicos

int main() {

    // =============================
    // Cartas pré-cadastradas
    // =============================

    char pais1[50] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8515767.0;
    float pib1 = 1.92;
    int pontos1 = 50;
    float densidade1 = populacao1 / area1;

    char pais2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 0.63;
    int pontos2 = 30;
    float densidade2 = populacao2 / area2;

    int atributo1, atributo2;
    float valor1_attr1 = 0, valor2_attr1 = 0;
    float valor1_attr2 = 0, valor2_attr2 = 0;
    float soma1 = 0, soma2 = 0;

    // =============================
    // MENU PRIMEIRO ATRIBUTO
    // =============================

    printf("===== SUPER TRUNFO - NIVEL MESTRE =====\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &atributo1);

    // =============================
    // MENU SEGUNDO ATRIBUTO (dinamico)
    // =============================

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");

    for(int i = 1; i <= 5; i++) {
        if(i != atributo1) {
            switch(i) {
                case 1: printf("1 - Populacao\n"); break;
                case 2: printf("2 - Area\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turisticos\n"); break;
                case 5: printf("5 - Densidade Demografica\n"); break;
            }
        }
    }

    printf("Opcao: ");
    scanf("%d", &atributo2);

    // Verifica se escolheu o mesmo atributo
    if(atributo1 == atributo2) {
        printf("Erro: Voce escolheu o mesmo atributo duas vezes!\n");
        return 0;
    }

    // =============================
    // FUNCAO PARA DEFINIR VALORES
    // =============================

    // Primeiro atributo
    switch(atributo1) {
        case 1: valor1_attr1 = populacao1; valor2_attr1 = populacao2; break;
        case 2: valor1_attr1 = area1; valor2_attr1 = area2; break;
        case 3: valor1_attr1 = pib1; valor2_attr1 = pib2; break;
        case 4: valor1_attr1 = pontos1; valor2_attr1 = pontos2; break;
        case 5: valor1_attr1 = densidade1; valor2_attr1 = densidade2; break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // Segundo atributo
    switch(atributo2) {
        case 1: valor1_attr2 = populacao1; valor2_attr2 = populacao2; break;
        case 2: valor1_attr2 = area1; valor2_attr2 = area2; break;
        case 3: valor1_attr2 = pib1; valor2_attr2 = pib2; break;
        case 4: valor1_attr2 = pontos1; valor2_attr2 = pontos2; break;
        case 5: valor1_attr2 = densidade1; valor2_attr2 = densidade2; break;
        default:
            printf("Opcao invalida!\n");
            return 0;
    }

    // =============================
    // REGRA ESPECIAL (densidade menor vence)
    // =============================

    if(atributo1 == 5) {
        valor1_attr1 = -valor1_attr1;
        valor2_attr1 = -valor2_attr1;
    }

    if(atributo2 == 5) {
        valor1_attr2 = -valor1_attr2;
        valor2_attr2 = -valor2_attr2;
    }

    // =============================
    // SOMA DOS ATRIBUTOS
    // =============================

    soma1 = valor1_attr1 + valor1_attr2;
    soma2 = valor2_attr1 + valor2_attr2;

    // =============================
    // RESULTADO
    // =============================

    printf("\n===== RESULTADO =====\n");
    printf("%s - Soma: %.2f\n", pais1, soma1);
    printf("%s - Soma: %.2f\n", pais2, soma2);

    // Operador ternario
    if(soma1 == soma2) {
        printf("Empate!\n");
    } else {
        char vencedor[50];
        strcpy(vencedor, (soma1 > soma2) ? pais1 : pais2);
        printf("Vencedor: %s\n", vencedor);
    }

    return 0;
}
