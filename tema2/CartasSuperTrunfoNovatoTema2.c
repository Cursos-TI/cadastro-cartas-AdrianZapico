#include <stdio.h>

int main() {

    char codigo[4]; // Ex: A01, B03, H04
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    printf("=== Cadastro de Carta - Super Trunfo ===\n");

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

    printf("\n--- Carta Cadastrada ---\n");
    printf("Codigo: %s\n", codigo);
    printf("Populacao: %d habitantes\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes\n", pib);
    printf("Pontos turisticos: %d\n", pontosTuristicos);

    return 0;
}
