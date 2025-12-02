#include <stdio.h>

// Desafio Super Trunfo - Países
// Nível Mestre – Comparação entre cartas
// Inclui cálculos, comparação entre propriedades e Super Poder

int main() {

    // -----------------------------
    // Variáveis da Carta 1
    // -----------------------------
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // -----------------------------
    // Variáveis da Carta 2
    // -----------------------------
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;


    // -----------------------------
    // Entrada de dados - Carta 1
    // -----------------------------
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos1);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontos1 + densidade1 + pibPerCapita1;


    // -----------------------------
    // Entrada de dados - Carta 2
    // -----------------------------
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código (ex: A01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos2);

    // Cálculos
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + densidade2 + pibPerCapita2;


    // ---------------------------------
    // Exibição das cartas cadastradas
    // ---------------------------------
    printf("\n\n===== CARTA 1 =====\n");
    printf("Cidade: %s (%s)\n", cidade1, codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n===== CARTA 2 =====\n");
    printf("Cidade: %s (%s)\n", cidade2, codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);


    // ---------------------------------
    // Comparações entre as cartas
    // ---------------------------------
    printf("\n\n===== RESULTADO DAS COMPARAÇÕES =====\n");

    // ⭐ População (maior vence)
    printf("\nPopulação: ");
    if (populacao1 > populacao2)
        printf("Carta 1 venceu!");
    else
        printf("Carta 2 venceu!");

    // ⭐ Área (maior vence)
    printf("\nÁrea: ");
    if (area1 > area2)
        printf("Carta 1 venceu!");
    else
        printf("Carta 2 venceu!");

    // ⭐ PIB (maior vence)
    printf("\nPIB: ");
    if (pib1 > pib2)
        printf("Carta 1 venceu!");
    else
        printf("Carta 2 venceu!");

    // ⭐ Pontos Turísticos (maior vence)
    printf("\nPontos Turísticos: ");
    if (pontos1 > pontos2)
        printf("Carta 1 venceu!");
    else
        printf("Carta 2 venceu!");

    // ⭐ Densidade Populacional (menor vence)
    printf("\nDensidade Populacional: ");
    if (densidade1 < densidade2)
        printf("Carta 1 venceu!");
    else
        printf("Carta 2 venceu!");

    // ⭐ PIB per capita (maior vence)
    printf("\nPIB per Capita: ");
    if (pibPerCapita1 > pibPerCapita2)
        printf("Carta 1 venceu!");
    else
        printf("Carta 2 venceu!");

    // ⭐ Super Poder (maior vence)
    printf("\nSuper Poder: ");
    if (superPoder1 > superPoder2)
        printf("Carta 1 venceu!");
    else
        printf("Carta 2 venceu!");

    printf("\n");
 
    return 0;
}
