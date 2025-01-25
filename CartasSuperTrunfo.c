#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    int codigo_cidade; // Variável para o código postal da cidade
    char nome_cidade[26];  // Variável para o nome da cidade vonsiderando um nome com até 25 caracteres
    int populacao; // Variável para a população total da cidade
    float area; // Variável para a área completa da cidade
    float pib; // Variável para o PIP da cidade
    int pontos_turisticos; // Variável para a quantidade de pontos turísticos da cidade

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // nível novato
    printf("Digite código postal da cidade: "); // Pede para que o usuário digite o código postal da cidade.
    scanf("%d", &codigo_cidade); // armazena o valor na variável

    printf("Digite o nome da cidade: "); // Pede para que o usuário digite o nome da cidade.
    scanf(" %[^\n]", nome_cidade);  // armazena o valor na variável

    printf("Digite a população da cidade: "); // Pede para que o usuário digite o a população da cidade.
    scanf("%d", &populacao); // armazena o valor na variável

    printf("Digite a área da cidade: "); // Pede para que o usuário digite o área da cidade.
    scanf("%f", &area); // armazena o valor na variável

    printf("Digite o PIB da cidade: "); // Pede para que o usuário digite o PIB da cidade.
    scanf("%f", &pib); // armazena o valor na variável

    printf("Digite os pontos turísticos da cidade: "); // Pede para que o usuário digite a quantidade de pontos turísticos da cidade.
    scanf("%d", &pontos_turisticos); // armazena o valor na variável

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nCadastro da Cidade:\n"); // Exibe um texto informando os dados da cidade
    printf("Código: %d\n", codigo_cidade); // Exibe o código postal
    printf("Nome: %s\n", nome_cidade);  // Exibe o nome da cidade
    printf("População: %d\n", populacao); // Exibe a população da cidade
    printf("Área: %.2f\n", area);  // Exibe a área com 2 casas decimais
    printf("PIB: %.2f\n", pib);    // Exibe o PIB com 2 casas decimais
    printf("Pontos Turísticos: %d\n", pontos_turisticos); // Exibe a quantidade de pontos turísticos

    // nível aventureiro
    float densidade_populacional;
    float pib_per_capita;

    densidade_populacional = populacao / area; // calcular a densidade populacional
    pib_per_capita = pib / populacao; // calculando o pip por pessoa (pip per capita)

    printf("Densidade Populacional: %.2f\n", densidade_populacional); // exibindo a densidade populacional
    printf("PIB per capita: %.2f\n", pib_per_capita); // exibindo o pip por pessoa

    // nível mestre
    return 0;
}

