#include <stdio.h>

int main() {

    char codigo[4];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    float densidadePop;
    float pibPerCapita;

    printf("=== Cadastro de Carta - Super Trunfo (Aventureiro) ===\n");

    printf("Digite o codigo da cidade (ex: A01): ");
    scanf("%s", codigo);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Area (em km2): ");
    scanf("%f", &area);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos);

    // Cálculos
    densidadePop = populacao / area;
    pibPerCapita = pib * 1000000000.0f / populacao; 
    // Multiplicamos PIB por 1 bilhão para transformar "bilhões" em valor absoluto

    printf("\n--- Carta Cadastrada ---\n");
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %d habitantes\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes\n", pib);
    printf("Pontos turisticos: %d\n", pontosTuristicos);

    printf("Densidade populacional: %.2f hab/km2\n", densidadePop);
    printf("PIB per capita: %.2f\n", pibPerCapita);

    return 0;
}
