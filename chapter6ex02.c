#include <stdio.h>

int main(void) {
  char line[3];
  int valor;
  printf("ingrese una calificación\n");
  fgets(line, sizeof(valor), stdin);
  sscanf(line, "%d", &valor);

  if (valor>=101){
    printf("el valor ingresado es erroneo para a calificar");
    return 0;
  }
  if (valor<0){
    printf("el valor ingresado es erroneo para calificar");
  return 0;
  }
  
  if (valor>90){
    printf("tu promedio es A");
  }
  else if (valor>80){
    printf("tu promedio es B");
  } 
  else if (valor>70){
    printf("tu promedio es C");
  }
  else if (valor>60){
    printf("tu promedio es D");
  }
  else if (valor<=60){
    printf("tu promedio es F");
  }

  return 0;
}
