#include <stdio.h>

int main() {
  int temperatura;
  scanf("%d", &temperatura);
  
  // Essa foi a mais básica, que foi receber uma temperatura e informar, por meio de condições, sobre como está ela.
  if(temperatura < 18){
    printf("Baixa");
  } else if(temperatura > 24){ 
    printf("Alta");
  } else{
    printf("Ideal");
  }
  
  return 0;
}