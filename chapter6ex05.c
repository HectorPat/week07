#include <stdio.h>

int main(void) {
  char line[10];
  int año, division, cociente4,cociente100,cociente400;

  printf("ingrese un año\n");
  fgets(line, sizeof(año), stdin);
  sscanf(line, "%d", &año);
  
  cociente4=(año%4);
  cociente100=(año%100);
  cociente400=(año%400);
  if (cociente4 == 0){
    printf("es año biciesto\n");
  }
  if(cociente400==0){
    printf("es año biciesto\n");
  }
  else if (cociente100==0){
    printf("no año biciesto\n");
  }
  return 0;
}
