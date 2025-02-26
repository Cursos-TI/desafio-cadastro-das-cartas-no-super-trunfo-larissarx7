#include <stdio.h>

int main() {
    // Definição das variáveis para a primeira carta
    char estado1;
    int cidade_num1;
    int populacao1, area1, pib1, pontos_turisticos1;
    char nome1[4];
    float densidade_populacional1, pib_per_capita1, super_poder1;

    // Definição das variáveis para a segunda carta
    char estado2;
    int cidade_num2;
    int populacao2, area2, pib2, pontos_turisticos2;
    char nome2[4];
    float densidade_populacional2, pib_per_capita2, super_poder2;

    // Entrada de dados para a primeira carta
    printf("Cadastro da primeira carta de cidade - Super Trunfo: Países (Nível Mestre)\n");
    printf("Informe o estado (A-H) da primeira carta: ");
    scanf(" %c", &estado1);

    printf("Informe o número da cidade (1-4) da primeira carta: ");
    scanf("%d", &cidade_num1);

    sprintf(nome1, "%c%02d", estado1, cidade_num1);

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Informe a área da cidade (em km²): ");
    scanf("%d", &area1);

    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%d", &pib1);

    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculos das propriedades para a primeira carta
    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (float)pib1 * 1000000000 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + densidade_populacional1 + pib_per_capita1;

    // Entrada de dados para a segunda carta
    printf("\nCadastro da segunda carta de cidade - Super Trunfo: Países (Nível Mestre)\n");
    printf("Informe o estado (A-H) da segunda carta: ");
    scanf(" %c", &estado2);

    printf("Informe o número da cidade (1-4) da segunda carta: ");
    scanf("%d", &cidade_num2);

    sprintf(nome2, "%c%02d", estado2, cidade_num2);

    printf("Informe a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Informe a área da cidade (em km²): ");
    scanf("%d", &area2);

    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%d", &pib2);

    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos das propriedades para a segunda carta
    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (float)pib2 * 1000000000 / populacao2;
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + densidade_populacional2 + pib_per_capita2;

    // Comparação das cartas
    printf("\nComparando as cartas...\n");

    // Comparação das propriedades
    printf("\nPropriedades comparadas:\n");

    // Densidade Populacional (menor vence)
    if (densidade_populacional1 < densidade_populacional2) {
        printf("Densidade Populacional: Carta 1 vence\n");
    } else {
        printf("Densidade Populacional: Carta 2 vence\n");
    }

    // População (maior vence)
    if (populacao1 > populacao2) {
        printf("População: Carta 1 vence\n");
    } else {
        printf("População: Carta 2 vence\n");
    }

    // Área (maior vence)
    if (area1 > area2) {
        printf("Área: Carta 1 vence\n");
    } else {
        printf("Área: Carta 2 vence\n");
    }

    // PIB (maior vence)
    if (pib1 > pib2) {
        printf("PIB: Carta 1 vence\n");
    } else {
        printf("PIB: Carta 2 vence\n");
    }

    // Pontos turísticos (maior vence)
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Pontos turísticos: Carta 1 vence\n");
    } else {
        printf("Pontos turísticos: Carta 2 vence\n");
    }

    // Super Poder (maior vence)
    if (super_poder1 > super_poder2) {
        printf("Super Poder: Carta 1 vence\n");
    } else {
        printf("Super Poder: Carta 2 vence\n");
    }

    return 0;
}
