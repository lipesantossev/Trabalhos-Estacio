#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira carta
    char estado1 = 'S';
    char codigo1[4] = "SP1";
    char nomeCidade1[50] = "São Paulo";
    int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;
    
    // Declaração de variáveis para a segunda carta
    char estado2 = 'R';
    char codigo2[4] = "RJ1";
    char nomeCidade2[50] = "Rio de Janeiro";
    int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;
    
    // Cálculo de Densidade Populacional e PIB per capita
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;
    
    // Exibição das informações cadastradas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km^2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade1);
    printf("PIB per capita: %.6f bilhoes de reais\n", pibPerCapita1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km^2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km^2\n", densidade2);
    printf("PIB per capita: %.6f bilhoes de reais\n", pibPerCapita2);
    
    // Comparação e determinação da carta vencedora pelo PIB per capita
    printf("\nComparacao de cartas (Atributo: PIB per capita):\n");
    printf("Carta 1 - %s (%c): %.6f bilhoes de reais\n", nomeCidade1, estado1, pibPerCapita1);
    printf("Carta 2 - %s (%c): %.6f bilhoes de reais\n", nomeCidade2, estado2, pibPerCapita2);
    
    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
    } else {
        printf("Resultado: Empate!\n");
    }
    
    return 0;
}