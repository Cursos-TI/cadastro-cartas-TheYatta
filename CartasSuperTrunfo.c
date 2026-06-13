#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado[50];

  // Área para entrada de dados
  printf("Digite o Estado de 'A' a 'H': );
  scanf("%s", &estado);

  // Área para exibição dos dados da cidade
  printf("Estado: %s",estado);

return 0;
} 
