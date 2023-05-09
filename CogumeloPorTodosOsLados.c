#include <stdio.h>

int main() {
  int minutos, cogumelosColhidos;

  // Lê a quantidade de minutos disponíveis para colheita
  scanf("%d", &minutos);

  // TODO: Calcule e imprima a quantidade de cogumelos colhidos.
cogumelosColhidos = minutos/3;
// Esse é o desafio mais bobo cobrado entre eles. É necessário converter a cada 3 minutos em um cogumelo. Então é basicamente apenas dividir os minutos por 3 e levar o resultado para a variável em questão.
printf("%d", cogumelosColhidos);
  return 0;

}