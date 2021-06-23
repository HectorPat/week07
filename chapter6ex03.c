#include <stdio.h>

int main(void) {
  float valor;
  printf("ingrese una calificación\n");
  scanf("%f", &valor);

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
    if (valor>97){
      printf("+");
    }
    else if (valor>93){
      printf(" ");
    }
    else if (valor>90){
      printf("-");
    }
  }
  

  else if (valor>80){
    printf("tu promedio es B");
    if (valor>87){
      printf("+");
    }
    else if (valor>83){
      printf(" ");
    }
    else if (valor>80){
      printf("-");
    }
  } 


  else if (valor>70){
    printf("tu promedio es C");
    if (valor>77){
      printf("+");
    }
    else if (valor>73){
      printf(" ");
    }
    else if (valor>70){
      printf("-");
    }
  }


  else if (valor>60){
    printf("tu promedio es D");
    if (valor>67){
      printf("+");
    }
    else if (valor>63){
      printf(" ");
    }
    else if (valor>60){
      printf("-");
    }
  }
  
  
  else if (valor<=60){
    printf("tu promedio es F");
  }

  return 0;
}
