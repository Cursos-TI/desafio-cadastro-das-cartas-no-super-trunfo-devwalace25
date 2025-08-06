#include <stdio.h>

int main(){
    char estado[30];
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

//leitura dos dados
    
    printf("Estado: ");
    scanf("%s" , estado);


    printf("Código da carta: ");
    scanf("%s" , codigo);


    printf("Nome da cidade: ");
    scanf("%s" , cidade);


    printf("População: ");
    scanf("%d", &populacao);


    printf("Área (km²): ");
    scanf("%f" , &area);


    printf("PIB (bilhões): ");
    scanf("%f" , &pib);


    printf("Pontos Turísticos: ");
    scanf("%d" , &pontosTuristicos);
    

    // Impressão dos dados
    printf("\n--- Carta Super Trunfo ---\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("--------------------------\n");

    return 0;





    






















}