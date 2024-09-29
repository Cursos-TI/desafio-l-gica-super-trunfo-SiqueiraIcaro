#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado[50], estado2[50];
    char codigo[10], codigo2[10];
    char nome_cidade[50], nome_cidade2[50];
    int populacao, populacao2;
    float area, area2, pib, pib2;
    int ponto_turistico, ponto_turistico2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    printf("Cadastro da cidade:\n");
    printf("Estado: ");
    scanf("%s", &estado);
    printf("Código da carta: ");
    scanf("%s", &codigo);
    printf("Nome da cidade: ");
    scanf("%s", &nome_cidade);
    printf("População: ");
    scanf("%d", &populacao);
    printf("Área: ");
    scanf("%f", &area);
    printf("PIB: ");
    scanf("%f", &pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &ponto_turistico);


    printf("Cadastro da cidade2:\n");
    printf("Estado: ");
    scanf("%s", &estado2);
    printf("Código da carta: ");
    scanf("%s", &codigo2);
    printf("Nome da cidade: ");
    scanf("%s", &nome_cidade2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf("%d", &ponto_turistico2);

    int cidade1 = 0;
    int cidade2 = 0;

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    if (populacao > populacao2){
        cidade1++;
        printf("Cidade 1 tem maior populaçao \n");
    }
    else if(populacao < populacao2) {
        cidade2++;
        printf("Cidade 2 tem maior população \n");
    }
    if (area > area2){
        cidade1++;
        printf("Cidade 1 tem maior area \n");
    }
    else if(area < area2) {
        cidade2++;
        printf("Cidade 2 tem maior area \n");
    }
    if (pib > pib2){
        cidade1++;
        printf("Cidade 1 tem maior pib \n");
    }
    else if(pib < pib2) {
        cidade2++;
        printf("Cidade 2 tem maior pib \n");
    }
    if (ponto_turistico > ponto_turistico2){
        cidade1++;
        printf("Cidade 1 tem mais pontos turisticos \n");
    }
    else if(ponto_turistico < ponto_turistico2) {
        cidade2++;
        printf("Cidade 2 tem mais pontos turisticos \n");
    }
    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.
    
    if (cidade1 > cidade2) {
        printf("Cidade 1 é a vencedora com %d vitórias!\n", cidade1);
    } else if (cidade2 > cidade1) {
        printf("Cidade 2 é a vencedora com %d vitórias!\n", cidade2);
    } else {
        printf("As duas cidades estão empatadas com %d vitórias!\n", cidade1);
    }


    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
