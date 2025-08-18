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
    int populacao1, populacao2, ptsturisticos1, ptsturisticos2;
    float area1, area2, pib1, pib2;
    
    //Pedindo para inserir dados da população 
    printf("Digite a população da primeira cidade: \n");
    scanf("%d", &populacao1);
    
    //Pedindo para inserir a quantidade dos pontos turísticos
    printf("Digite a quantidade de pontos turísticos da primeira cidade: \n");
    scanf("%d", &ptsturisticos1);
    
    //Pedindo para inserir a área 
    printf("Digite a área da primeira cidade: \n");
    scanf("%f", &area1);

    //Pedindo para inserir o PIB 
    printf("Digite o PIB da primeira cidade: \n");
    scanf("%f", &pib1);

    //Pedindo para inserir dados da população
    printf("Digite a população da segunda cidade: \n");
    scanf("%d", &populacao2);
    
    //Pedindo para inserir a quantidade dos pontos turísticos
    printf("Digite a quantidade de pontos turísticos da segunda cidade: \n");
    scanf("%d", &ptsturisticos2);

    //Pedindo para inserir a área
    printf("Digite a área da segunda cidade: \n");
    scanf("%f", &area2);

    //Pedindo para inserir o PIB
    printf("Digite o PIB da segunda cidade: \n");
    scanf("%f", &pib2);

    //Imprime os dados das duas cartas
    printf("Carta da primeira cidade: \nPopulação: %d \nPontos turísticos: %d \nÁrea: %f \nPIB: %.2f \n", populacao1, ptsturisticos1, area1, pib1);
    printf("Carta da segunda cidade: \nPopulação: %d \nPontos turísticos: %d \nÁrea: %f \nPIB: %.2f \n", populacao2, ptsturisticos2, area2, pib2);
    return 0;
}
