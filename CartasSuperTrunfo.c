#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    //declaração das variaveis

    int PontoTuristico1,PontoTuristico2,Populaçao1, Populacao2;
    float PIB1,PIB2,Area1,Area2;
    char Estado1,Estado2;
    char Cidade1[10],Cidade2[10],Codigo1[10],Codigo2[10] ;

    // inserindo os dados das cartas

    printf("Insira o Estado da primeira carta (Uma letra de 'A' a 'H'): \n");
    scanf("%c", &Estado1);

    printf("Insira o codigo da primeira carta (A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): \n");
    scanf("%s", Codigo1);

    printf("Insira o nome da Cidade:\n");
    scanf("%s", Cidade1)

    printf("Insira o numero de habitantes da cidade:\n");
    scanf("%d", &Populaçao1);

    printf("insira a area da cidade em quilometros quadrados:\n");
    scanf("%f", &Area1);

    printf("Insira o produto interno bruto da cidade (PIB):\n");
    scanf("%f", &PIB1);

    printf("Insira a quantidade de pontos turisticos na cidade:\n");
    scanf("%d", &PontoTuristico1);

    






    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
