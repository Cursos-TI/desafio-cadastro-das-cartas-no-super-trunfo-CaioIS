#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    //Declarando as variáveis
    int ptsturisticos1, ptsturisticos2, resultado;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densipop1, densipop2, pibpcap1, pibpcap2, superpoder1, superpoder2;
    char codigo1[50], codigo2[50], nomecdd1[50], nomecdd2[50]; 
    
    //Pedindo para inserir o código da cidade
    printf("Digite o código da primeira cidade: \n");
    scanf("%s", codigo1); 

    //Pedindo para inserir o nome da cidade (sem espaços)
    printf("Digite o nome da primeira cidade: \n");
    scanf("%s", nomecdd1);

    //Pedindo para inserir dados da população 
    printf("Digite a população da primeira cidade: \n");
    scanf("%lu", &populacao1);
    
    //Pedindo para inserir a quantidade dos pontos turísticos
    printf("Digite a quantidade de pontos turísticos da primeira cidade: \n");
    scanf("%d", &ptsturisticos1);
    
    //Pedindo para inserir a área 
    printf("Digite a área da primeira cidade: \n");
    scanf("%f", &area1);

    //Pedindo para inserir o PIB 
    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &pib1);

    //Pedindo para inserir o código da cidade
    printf("Digite o código da segunda cidade: \n");
    scanf("%s", codigo2); 

    //Pedindo para inserir o nome da cidade (sem espaços)
    printf("Digite o nome da segunda cidade: \n");
    scanf("%s", nomecdd2);

    //Pedindo para inserir dados da população
    printf("Digite a população da segunda cidade: \n");
    scanf("%lu", &populacao2);
    
    //Pedindo para inserir a quantidade dos pontos turísticos
    printf("Digite a quantidade de pontos turísticos da segunda cidade: \n");
    scanf("%d", &ptsturisticos2);

    //Pedindo para inserir a área
    printf("Digite a área da segunda cidade: \n");
    scanf("%f", &area2);

    //Pedindo para inserir o PIB
    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &pib2);

    //Faz os cálculos necessários
    densipop1 = populacao1 / area1;
    densipop2 = populacao2 / area2;
    pibpcap1 = pib1 / populacao1;
    pibpcap2 = pib2 / populacao2;
    superpoder1 = (float) (populacao1 + ptsturisticos1) + area1 + pib1 + (1/densipop1) + pibpcap1;
    superpoder2 = (float) (populacao2 + ptsturisticos2) + area1 + pib2 + (1/densipop2) + pibpcap2;

    //Imprime os dados das duas cartas
    printf("Carta da primeira cidade: \nCódigo: %s\nNome: %s\nPopulação: %lu \nPontos turísticos: %d \nÁrea: %.2f \nPIB: %.2f \nDensidade populacional: %.2f hab/km² \nPIB per capita: %.2f reais\n", codigo1, nomecdd1, populacao1, ptsturisticos1, area1, pib1, densipop1, pibpcap1);
    printf("Carta da segunda cidade: \nCódigo: %s\nNome: %s \nPopulação: %lu \nPontos turísticos: %d \nÁrea: %.2f \nPIB: %.2f \nDensidade populacional: %.2f hab/km² \nPIB per capita: %.2f reais\n", codigo2, nomecdd2, populacao2, ptsturisticos2, area2, pib2, densipop2, pibpcap2);
    
    //Compara os dados das cartas e imprime o vencedor
    printf("*** Comparações dos dados ***\n");
    resultado = populacao1 > populacao2;
    printf("População: %d\n", resultado);
    resultado = ptsturisticos1 > ptsturisticos2;
    printf("Pontos turísticos: %d\n", resultado);
    resultado = area1 > area2;
    printf("Área: %d\n", resultado);
    resultado = pib1 > pib2;
    printf("PIB: %d\n", resultado);
    resultado = densipop1 < densipop2;
    printf("Densidade populacional: %d\n", resultado);
    resultado = pibpcap1 > pibpcap2;
    printf("PIB per capita: %d\n", resultado);
    resultado = superpoder1 > superpoder2;
    printf("Super Poder: %d", resultado);

    return 0;
}
