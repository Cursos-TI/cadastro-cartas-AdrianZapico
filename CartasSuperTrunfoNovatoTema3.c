#include <stdio.h>

int main() {

    // ================================================================
    // SUPER TRUNFO – Nível Novato (Comparação de Cartas)
    // Objetivo:
    // 1. Cadastrar duas cartas
    // 2. Calcular densidade populacional e PIB per capita
    // 3. Comparar as cartas baseado em um atributo fixo no código
    // ================================================================

    // -----------------------------
    // Variáveis da Carta 1
    // -----------------------------
    char estado1[20];
    char codigo1[10];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // -----------------------------
    // Variáveis da Carta 2
    // -----------------------------
    char estado2[20];
    char codigo2[10];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // ================================================================
    // Entrada de dados da CARTA 1
    // ================================================================
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado: ");
    scanf("%s", estado1);

    printf("Código da Carta: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf("%s", nome1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);


    // ================================================================
    // Entrada da CARTA 2
    // ================================================================
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado: ");
    scanf("%s", estado2);

    printf("Código da Carta: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf("%s", nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);


    // ================================================================
    // Cálculos automáticos
    // ================================================================
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibCapita1 = pib1 / populacao1;
    float pibCapita2 = pib2 / populacao2;

    // ================================================================
    // ATRIBUTO ESCOLHIDO PARA COMPARAÇÃO
    // Altere aqui caso queira comparar outro atributo.
    // Opções: populacao, area, pib, densidade, pibCapita
    // ================================================================

    int atributoEscolhido = 1;
    // 1 = população
    // 2 = área
    // 3 = PIB
    // 4 = densidade populacional
    // 5 = PIB per capita

    printf("\n=====================================\n");
    printf("   COMPARAÇÃO DE CARTAS – SUPER TRUNFO\n");
    printf("=====================================\n");

    // ================================================================
    // COMPARAÇÃO
    // ================================================================

    float valor1, valor2;
    char nomeAtributo[40];

    if (atributoEscolhido == 1) {
        valor1 = populacao1;
        valor2 = populacao2;
        sprintf(nomeAtributo, "População");
    }
    else if (atributoEscolhido == 2) {
        valor1 = area1;
        valor2 = area2;
        sprintf(nomeAtributo, "Área");
    }
    else if (atributoEscolhido == 3) {
        valor1 = pib1;
        valor2 = pib2;
        sprintf(nomeAtributo, "PIB");
    }
    else if (atributoEscolhido == 4) {
        valor1 = densidade1;
        valor2 = densidade2;
        sprintf(nomeAtributo, "Densidade Populacional");
    }
    else if (atributoEscolhido == 5) {
        valor1 = pibCapita1;
        valor2 = pibCapita2;
        sprintf(nomeAtributo, "PIB per Capita");
    }

    printf("\nAtributo Escolhido: %s\n", nomeAtributo);
    printf("Carta 1 (%s): %.2f\n", nome1, valor1);
    printf("Carta 2 (%s): %.2f\n", nome2, valor2);

    // ================================================================
    // LÓGICA DE VITÓRIA
    // ================================================================

    // Densidade populacional → MENOR vence
    if (atributoEscolhido == 4) {

        if (valor1 < valor2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome1);
        } else {
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome2);
        }

    } else {
        // Outros atributos → MAIOR vence
        if (valor1 > valor2) {
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome1);
        } else {
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome2);
        }
    }

    printf("=====================================\n");

    return 0;
}
