#include <stdio.h>

int main() {
  int values[5];
  int x, y;
  printf("Digite 1 para multiplicar o array por 4 ou digite 2 para multiplicar por um número a sua escolha: ");
  scanf("%d", &y);
  if (y == 1){
  for(int i = 0; i < 5; ++i) {
    printf("Entre com um valor para a posição %d: ",i);
    scanf("%d", &values[i]);
  }
  for(int i = 0; i < 5; ++i) {
    printf("Valor da posição %d do array, multiplicado por 4: ", i);
    printf("%d\n ", values[i]*4);
  }
  return 0;
  }
  else 
    if(y == 2){
    printf("Digite um número para multiplicar o array: ");
    scanf("%d", &x);
    for(int i = 0; i < 5; ++i) {
    printf("Entre com um valor para a posição %d: ",i);
    scanf("%d", &values[i]);
    }
    for(int i = 0; i < 5; ++i) {
    printf("Valor da posição %d do array, multiplicado por %d: ", i, x);
    printf("%d\n ", values[i]*x);
    }
    return 0;
    }
}