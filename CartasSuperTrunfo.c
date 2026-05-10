#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char Estado = 'a';
    char Codigo[20];
    char Nome_da_cidade[50];
    int Populacao;
    float area;
    float pib;
    int Numero_de_pontos_turisticos;

     char Estado2 = 'a';
    char Codigo2[20];
    char Nome_da_cidade2[50];
    int Populacao2;
    float area2;
    float pib2;
    int Numero_de_pontos_turisticos2;

    printf("Digite o Estado:");
    scanf("%c", &Estado);
    printf("Digite o Codigo:");
    scanf("%s", Codigo);
    printf("Digite o Nome da Cidade:");
    scanf(" %[^\n]", Nome_da_cidade);
    printf("Digite a Populacao:");
    scanf("%d", &Populacao);
    printf("Digite a Area:");
    scanf("%f", &area);
    printf("Digite o PIB:");
    scanf("%f", &pib);
    printf("Digite o Numero de Pontos Turisticos:");
    scanf("%d", &Numero_de_pontos_turisticos);

        printf("\n\nDigite o Estado:");
    scanf(" %c", &Estado2);
    printf("Digite o Codigo:");
    scanf("%s", Codigo2);
    printf("Digite o Nome da Cidade:");
    scanf(" %[^\n]", Nome_da_cidade2);
    printf("Digite a Populacao:");
    scanf("%d", &Populacao2);
    printf("Digite a Area:");
    scanf("%f", &area2);
    printf("Digite o PIB:");
    scanf("%f", &pib2);
    printf("Digite o Numero de Pontos Turisticos:");
    scanf("%d", &Numero_de_pontos_turisticos2);
    
    printf("\nEstado: %c", Estado);
    printf("\nCodigo: %s", Codigo);
    printf("\nNome da Cidade: %s", Nome_da_cidade);
    printf("\nPopulacao: %d", Populacao);
    printf("\nArea: %.2f km²", area);
    printf("\nPIB: %.2f Bilhoes", pib);
    printf("\nNumero de Pontos Turisticos: %d", Numero_de_pontos_turisticos);



    printf("\nEstado: %c", Estado2);
    printf("\nCodigo: %s", Codigo2);
    printf("\nNome da Cidade: %s", Nome_da_cidade2);
    printf("\nPopulacao: %d", Populacao2);
    printf("\nArea: %.2f km²", area2);
    printf("\nPIB: %.2f Bilhoes", pib2);
    printf("\nNumero de Pontos Turisticos: %d", Numero_de_pontos_turisticos2);



return 0;
} 
