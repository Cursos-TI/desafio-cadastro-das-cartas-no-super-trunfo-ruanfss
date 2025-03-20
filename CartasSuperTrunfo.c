#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char cidade1[50], cidade2[50];                   // declaração das variaveis das duas cartas
    int populacao1, area1, pib1, pontos_turisticos1; // declaração das variaveis das duas cartas
    int populacao2, area2, pib2, pontos_turisticos2; // declaração das variaveis das duas cartas

    //coletar dados da primeira carta1
    printf("Digite o nome da cidade: \n");  
    scanf("%s", &cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%d", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%d", &pib1);

    printf("Digite a quantidade de pontos turisticos dessa cidade: \n");
    scanf("%d", &pontos_turisticos1);

    //exibira os dados da carta1
    printf("Carta1:\n");
    printf("Estado: A\n");
    printf("Código: A01\n");
    printf("Nome da Cidade: %s\n População: %d\n Área: %d km² \n PIB: %d \n Número de Pontos Turisticos: %d", cidade1, populacao1, area1, pib1, pontos_turisticos1);

    //coletar dados da primeira carta2
    printf("\nDigite o nome da cidade 2: \n");  
    scanf("%s", &cidade2);
 
    printf("Digite a população: \n");
    scanf("%d", &populacao2);
 
    printf("Digite a área da cidade em quilômetros quadrados: \n");
    scanf("%d", &area2);
 
    printf("Digite o PIB da cidade: \n");
    scanf("%d", &pib2);
 
    printf("Digite a quantidade de pontos turisticos dessa cidade: \n");
    scanf("%d", &pontos_turisticos2);
 
     //exibira os dados da carta2
    printf("Carta2:\n");
    printf("Estado: B\n");
    printf("Código: B02\n");
    printf("Nome da Cidade: %s\n População: %d\n Área: %d km² \n PIB: %d \n Número de Pontos Turisticos: %d", cidade2, populacao2, area2, pib2, pontos_turisticos2);
 


    return 0;
}
