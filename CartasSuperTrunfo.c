#include <stdio.h>

int main(){
    int carta1, carta2, populacao1, populacao2, ponto_turistico1, ponto_turistico2;
    float pib1, pib2, area1, area2, densidade_populacional1, densidade_populacional2,  pib_percapita1, pib_percapita2;
    char estado;
    char codigo_da_carta[10], cidade[10];
    float super_poder1, super_poder2;
    int resultado_populaçao, resultado_ponto_turistico, resultado_pib, resultado_area, resultado_densidade, resultado_pibpercapita, resultado_superpoder;

    printf("*Estado: Uma letra de 'A' a 'H' (representando um dos oito estados).\n");
    printf("*Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03).\n");
    printf("*Nome da Cidade: O nome da cidade.\n");
    printf("*População: O número de habitantes da cidade.\n");
    printf("*Área (em km²): A área da cidade em quilômetros quadrados.\n");
    printf("*PIB: O Produto Interno Bruto da cidade.\n");
    printf("*Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade.\n");
    printf("\n");

    printf("Carta 1: \n");

    printf("Estado: ");
    scanf("%c", &estado);

    printf("Código: ");
    scanf("%s", codigo_da_carta);

    printf("Nome da cidade: ");
    scanf("%s", cidade);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf(" %f", &area1); // <-- espaço antes do %f para pular espaços e quebra de linha que ficaram na entrada

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turistios: ");
    scanf(" %d", &ponto_turistico1); // <-- espaço antes do %d para pular espaços e quebra de linha que ficaram na entrada
    printf("\n");

    densidade_populacional1 = populacao1 / area1;
    pib_percapita1 = pib1 / populacao1;

    printf("Densidade populacional:  %.3f\n", densidade_populacional1);
    
    printf("O PIB per capita é: %f\n", pib_percapita1);

    super_poder1 = populacao1 + area1 + pib1 + pib_percapita1 + (1 / densidade_populacional1);

    printf("Super poder: %f\n", super_poder1);
    printf("\n");
    
    printf("Carta 2: \n");

    printf("Estado: ");
    scanf(" %c", &estado); // <-- espaço antes do %c para pular espaços e quebra de linha que ficaram na entrada

    printf("Código: ");
    scanf("%s", codigo_da_carta);

    printf("Nome da cidade: ");
    scanf(" %s", cidade);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²) ");
    scanf(" %f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turistios: ");
    scanf(" %d", &ponto_turistico2);

    densidade_populacional2 = populacao2 / area2;
    pib_percapita2 = pib2 / populacao2;

    printf("Densidade populacional:  %.3f\n", densidade_populacional2);
    
    printf("O PIB per capita é: %f\n", pib_percapita2);

    super_poder2 = populacao2 + area2 + pib2 + pib_percapita2 + (1 / densidade_populacional2);

    printf("Super poder: %f\n", super_poder2);
    printf("\n");

    printf("Comparação de cartas:\n");

    resultado_populaçao = populacao1 > populacao2;
    resultado_area = area1 > area2;
    resultado_pib = pib1 > pib2;
    resultado_ponto_turistico = ponto_turistico1 > ponto_turistico2;
    resultado_densidade = densidade_populacional1 > densidade_populacional2;
    resultado_pibpercapita = pib_percapita1 > pib_percapita2;
    resultado_superpoder = super_poder1 > super_poder2;

    
    printf("População: %d\n", resultado_populaçao);
    printf("Área: %d\n", resultado_area);
    printf("PIB: %d\n", resultado_pib);
    printf("Pontos turísticos: %d\n", resultado_ponto_turistico);
    printf("Densidade populacional: %d\n", resultado_densidade);
    printf("PIB per capita: %d\n", resultado_pibpercapita);
    printf("Super poder: %d\n", resultado_superpoder);

    


    return 0;

}