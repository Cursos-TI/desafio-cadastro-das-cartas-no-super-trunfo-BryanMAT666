#include <stdio.h>

int main() {

    // Carta 1
    char estado1[3];
    char codigo1[5];
    char nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    printf("====== Cadastro da Carta 1 ======\n");
    printf("Escolha uma letra entre A e H: ");
    scanf(" %s", estado1);

    printf("Escolha um código (ex: A01, B03): ");
    scanf("%s", codigo1);

    printf("Escolha o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Lê com espaço

    printf("Qual a população da cidade: ");
    scanf("%d", &populacao1);

    printf("Qual a área da cidade: ");
    scanf("%f", &area1);

    printf("Qual o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);


    // Carta 2
    char estado2[3];
    char codigo2[5];
    char nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    printf("\n====== Cadastro da Carta 2 ======\n");
    printf("Escolha uma letra entre A e H: ");
    scanf(" %s", estado2);

    printf("Escolha um código (ex: A01, B03): ");
    scanf("%s", codigo2);

    printf("Escolha o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Qual a população da cidade: ");
    scanf("%d", &populacao2);

    printf("Qual a área da cidade: ");
    scanf("%f", &area2);

    printf("Qual o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);


    // Exibindo as cartas
    printf("\n\n========== CARTA 1 ==========\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontosTuristicos1);

    printf("\n========== CARTA 2 ==========\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontosTuristicos2);

return 0;

}

