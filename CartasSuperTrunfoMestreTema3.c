#include <stdio.h>

int main() {

    // Cartas pré-cadastradas (exemplo)
    char pais1[] = "Brasil";
    int populacao1 = 214;
    float area1 = 8516.0;
    float pib1 = 1.8;
    float densidade1 = populacao1 / area1;

    char pais2[] = "Argentina";
    int populacao2 = 45;
    float area2 = 2780.0;
    float pib2 = 0.5;
    float densidade2 = populacao2 / area2;

    int escolha1, escolha2;

    printf("===== SUPER TRUNFO - NIVEL MESTRE =====\n\n");

    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n\n", pais2);

    printf("Escolha o PRIMEIRO atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &escolha1);

    // Menu dinâmico
    printf("\nEscolha o SEGUNDO atributo (não pode repetir):\n");

    if (escolha1 != 1) printf("1 - População\n");
    if (escolha1 != 2) printf("2 - Área\n");
    if (escolha1 != 3) printf("3 - PIB\n");
    if (escolha1 != 4) printf("4 - Densidade Demográfica\n");

    printf("Opção: ");
    scanf("%d", &escolha2);

    if (escolha1 == escolha2) {
        printf("\nErro: Você escolheu o mesmo atributo duas vezes!\n");
        return 0;
    }

    // Função auxiliar para obter valores dos atributos
    float valor1_a, valor2_a;
    float valor1_b, valor2_b;

    // Switch para primeiro atributo
    switch (escolha1) {
        case 1: valor1_a = populacao1; valor2_a = populacao2; break;
        case 2: valor1_a = area1; valor2_a = area2; break;
        case 3: valor1_a = pib1; valor2_a = pib2; break;
        case 4: valor1_a = densidade1; valor2_a = densidade2; break;
        default:
            printf("Opção inválida na primeira escolha.\n");
            return 0;
    }

    // Switch para segundo atributo
    switch (escolha2) {
        case 1: valor1_b = populacao1; valor2_b = populacao2; break;
        case 2: valor1_b = area1; valor2_b = area2; break;
        case 3: valor1_b = pib1; valor2_b = pib2; break;
        case 4: valor1_b = densidade1; valor2_b = densidade2; break;
        default:
            printf("Opção inválida na segunda escolha.\n");
            return 0;
    }

    // Comparações individuais
    int pontos1 = 0, pontos2 = 0;

    // Primeiro atributo
    if (escolha1 == 4) { // densidade -> menor vence
        (valor1_a < valor2_a) ? pontos1++ : pontos2++;
    } else {
        (valor1_a > valor2_a) ? pontos1++ : pontos2++;
    }

    // Segundo atributo
    if (escolha2 == 4) { // densidade -> menor vence
        (valor1_b < valor2_b) ? pontos1++ : pontos2++;
    } else {
        (valor1_b > valor2_b) ? pontos1++ : pontos2++;
    }

    // Soma dos atributos (regra final)
    float soma1 = valor1_a + valor1_b;
    float soma2 = valor2_a + valor2_b;

    printf("\n====== RESULTADO ======\n\n");
    printf("%s: %.2f + %.2f = %.2f\n", pais1, valor1_a, valor1_b, soma1);
    printf("%s: %.2f + %.2f = %.2f\n\n", pais2, valor2_a, valor2_b, soma2);

    if (soma1 > soma2) {
        printf("Vencedor: %s!\n", pais1);
    } else if (soma2 > soma1) {
        printf("Vencedor: %s!\n", pais2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}
