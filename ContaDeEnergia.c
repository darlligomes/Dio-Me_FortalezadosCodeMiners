#include <stdio.h>


// Aqui definimos a função principal, a "main"
int main() {
  // Aqui definimos os tipos de valores que iremos receber, seja texto (string) ou números (Double, int, float,...)
  int consumo1, consumo2, consumo3;
double media;

  // Lendo os valores de consumo das três máquinas, aqui o usuário insere os valores.
  scanf("%d %d %d", &consumo1, &consumo2, &consumo3);

  //TODO: Calcule a média de consumo e a imprima com duas casas decimais.
media = (double)(consumo1 + consumo2 + consumo3) /3;
  // Aqui é realizado o cálculo da média ao mesmo tempo que é definido o tipo de valor que deve ser recebido (Double)

printf("%.2f", media);
  // Definimos que o valor deve ser impresso com duas casas decimais (Na verdade, o desafio que exige!), o que é importante!
  // Usuários estranhariam receber valores como 12.4398436042962 ao invés de 12,43 ou, até mesmo, 12,44.

  return 0;
}