#include <stdio.h>

int main(){
    int carta, populacao, ponto_turistico;
    float pib, area;
    char estado;
    char codigo_da_carta[10], cidade[10];

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
    scanf("%d", &populacao);

    printf("Área (em km²): ");
    scanf(" %f", &area); // <-- espaço antes do %f para pular espaços e quebra de linha que ficaram na entrada

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turistios: ");
    scanf(" %d", &ponto_turistico); // <-- espaço antes do %d para pular espaços e quebra de linha que ficaram na entrada
    printf("\n");
    
    printf("Carta 2: \n");

    printf("Estado: ");
    scanf(" %c", &estado); // <-- espaço antes do %c para pular espaços e quebra de linha que ficaram na entrada

    printf("Código: ");
    scanf("%s", codigo_da_carta);

    printf("Nome da cidade: ");
    scanf(" %s", cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área (em km²) ");
    scanf(" %f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    printf("Número de Pontos Turistios: ");
    scanf(" %d", &ponto_turistico);


    return 0;

}