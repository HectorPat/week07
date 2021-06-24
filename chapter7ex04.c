#include <stdio.h>
#include <string.h>

int main(void) {
  char line[5];
  int importe;
  float impuesto;
  float porsentaje;
  float redondeo; /*con esto dejo solo los centavos*/
  float resultado;
  int resultado2; /*con esto quito los centavos*/
  float resultado3; /*resultado de la aplicacion de redondeo*/
  

  printf("ingrese importe\n");
  fgets(line, sizeof(importe),stdin);
  sscanf(line,"%d",&importe);

  porsentaje= ((.08)*(importe));
  resultado =(importe)+(porsentaje);
  resultado2= resultado;
  redondeo=(resultado-resultado2);
  
  if(redondeo>.50){
    resultado3= resultado-redondeo;
    resultado3+=1;
  }
  else if(redondeo<.50){
    resultado3= resultado-redondeo;
    resultado3-=1;
  }

  printf("el impuesto será %.2f pesos\n",porsentaje);
  printf("el resultado sin redondear es %.2f pesos\n",resultado);
  printf("el resultado final es %.2f pesos\n",resultado3);

  return 0;
}
