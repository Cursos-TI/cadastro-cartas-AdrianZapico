#include <stdio.h>

// Função para ler uma carta
void lerCarta(
    char codigo[], int *populacao, float *area, float *pib,
    int *pontos, float *densidade, float *pibPerCapita, float *superPoder
) {
    printf("Código da cidade (ex: A01): ");
    scanf("%s", codigo);

    printf("População: ");
    scanf("%d", populacao);

    printf("Área (km²): ");
    scanf("%f", area);

    printf("PIB (em bilhões): ");
    scanf("%f", pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", pontos);

    // Cálculos
    *densidade = *populacao / *area;
    *pibPerCapita = (*pib * 1000000000.0f) / *populacao;

    *superPoder = *populacao + *area + (*pib * 1000000000.0f) +
                  *pontos + *pibPerCapita + *densidade;
}

// Função de comparação que imprime o vencedor
void comparar(const char *nome, float valor1, float valor2, int menorGanha) {
    printf("\n► %s: ", nome);

    if (menorGanha) {
        if (valor1 < valor2) printf("Carta 1 venceu!");
        else if (valor2 < valor1) printf("Carta 2 venceu!");
        else printf("Empate!");
    } else {
        if (valor1 > valor2) printf("Carta 1 venceu!");
        else if (valor2 > valor1) printf("Carta 2 venceu!");
        else printf("Empate!");
    }
}

int main() {

    // Carta 1
    char codigo1[4];
    int pop1, pontos1;
    float area1, pib1, dens1, pibCap1, sp1;

    // Carta 2
    char codigo2[4];
    int pop2, pontos2;
    float area2, pib2, dens2, pibCap2, sp2;

    printf("\n=== Cadastro Carta 1 ===\n");
    lerCarta(codigo1, &pop1, &area1, &pib1, &pontos1, &dens1, &pibCap1, &sp1);

    printf("\n=== Cadastro Carta 2 ===\n");
    lerCarta(codigo2, &pop2, &area2, &pib2, &pontos2, &dens2, &pibCap2, &sp2);

    printf("\n============================");
    printf("\n      RESULTADOS");
    printf("\n============================\n");

    comparar("População", pop1, pop2, 0);
    comparar("Área", area1, area2, 0);
    comparar("PIB", pib1, pib2, 0);
    comparar("Pontos Turísticos", pontos1, pontos2, 0);
    comparar("PIB per capita", pibCap1, pibCap2, 0);
    comparar("Densidade populacional", dens1, dens2, 1);

    printf("\n\n► Super Poder Total: ");
    if (sp1 > sp2) printf("Carta 1 venceu!\n");
    else if (sp2 > sp1) printf("Carta 2 venceu!\n");
    else printf("Empate!\n");

    return 0;
}
