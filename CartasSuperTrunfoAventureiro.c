#include <stdio.h>

int main() {

    // ============================================================
    // SUPER TRUNFO — Nível Aventureiro
    // Menu Interativo + Comparações com Switch e If/Else Aninhado
    // ============================================================

    // ------------------------------------------------------------
    // Dados da Carta 1
    // ------------------------------------------------------------
    char nome1[50] = "Brasil";
    int populacao1 = 203000000;
    float area1 = 8516000.0;
    float pib1 = 2.1;
    int pontos1 = 20;
    float densidade1 = populacao1 / area1;

    // ------------------------------------------------------------
    // Dados da Carta 2
    // ------------------------------------------------------------
    char nome2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780000.0;
    float pib2 = 0.5;
    int pontos2 = 12;
    float densidade2 = populacao2 / area2;

    // ------------------------------------------------------------
    // Menu
    // ------------------------------------------------------------
    int opcao;

    printf("=====================================\n");
    printf("     SUPER TRUNFO — Nível Aventureiro\n");
    printf("=====================================\n\n");

    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - Exibir nomes apenas\n");
    printf("\nDigite a opção desejada: ");
    scanf("%d", &opcao);

    printf("\n-------------------------------------\n");

    // ------------------------------------------------------------
    // Lógica do menu com SWITCH
    // ------------------------------------------------------------
    switch (opcao) {

        // ========================================================
        // POPULAÇÃO
        // ========================================================
        case 1:
            printf("Comparação escolhida: POPULAÇÃO\n");
            printf("%s: %d habitantes\n", nome1, populacao1);
            printf("%s: %d habitantes\n", nome2, populacao2);

            if (populacao1 > populacao2) {
                printf("\nVencedor: %s\n", nome1);
            }
            else if (populacao2 > populacao1) {
                printf("\nVencedor: %s\n", nome2);
            }
            else {
                printf("\nEmpate!\n");
            }
            break;

        // ========================================================
        // ÁREA
        // ========================================================
        case 2:
            printf("Comparação escolhida: ÁREA\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);

            if (area1 > area2) {
                printf("\nVencedor: %s\n", nome1);
            }
            else if (area2 > area1) {
                printf("\nVencedor: %s\n", nome2);
            }
            else {
                printf("\nEmpate!\n");
            }
            break;

        // ========================================================
        // PIB
        // ========================================================
        case 3:
            printf("Comparação escolhida: PIB\n");
            printf("%s: %.2f trilhões\n", nome1, pib1);
            printf("%s: %.2f trilhões\n", nome2, pib2);

            if (pib1 > pib2) {
                printf("\nVencedor: %s\n", nome1);
            }
            else if (pib2 > pib1) {
                printf("\nVencedor: %s\n", nome2);
            }
            else {
                printf("\nEmpate!\n");
            }
            break;

        // ========================================================
        // PONTOS TURÍSTICOS
        // ========================================================
        case 4:
            printf("Comparação escolhida: PONTOS TURÍSTICOS\n");
            printf("%s: %d pontos\n", nome1, pontos1);
            printf("%s: %d pontos\n", nome2, pontos2);

            if (pontos1 > pontos2) {
                printf("\nVencedor: %s\n", nome1);
            }
            else if (pontos2 > pontos1) {
                printf("\nVencedor: %s\n", nome2);
            }
            else {
                printf("\nEmpate!\n");
            }
            break;

        // ========================================================
        // DENSIDADE DEMOGRÁFICA (MENOR VENCE)
        // ========================================================
        case 5:
            printf("Comparação escolhida: DENSIDADE DEMOGRÁFICA\n");
            printf("%s: %.2f hab/km²\n", nome1, densidade1);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);

            // Regra especial → menor densidade vence
            if (densidade1 < densidade2) {
                printf("\nVencedor: %s\n", nome1);
            }
            else if (densidade2 < densidade1) {
                printf("\nVencedor: %s\n", nome2);
            }
            else {
                printf("\nEmpate!\n");
            }
            break;

        // ========================================================
        // EXIBIR NOME DOS PAÍSES (não compara nada)
        // ========================================================
        case 6:
            printf("Você escolheu ver os nomes dos países:\n");
            printf("Carta 1: %s\n", nome1);
            printf("Carta 2: %s\n", nome2);
            break;

        // ========================================================
        // TRATAMENTO DE OPÇÃO INVÁLIDA
        // ========================================================
        default:
            printf("Opção inválida! Escolha entre 1 e 6.\n");
            break;
    }

    printf("\n-------------------------------------\n");
    printf("          Fim da Comparação\n");
    printf("-------------------------------------\n");

    return 0;
}
