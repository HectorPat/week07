#include <stdio.h>

int main(void) {
  char line [5];
  int horas;
  int salario;
  float sueldof;
  float sueldo=0;
  float sueldoex=0;
  float extra=0;
  printf("ingrese las horas trabajadas a la semana\n");
  fgets(line, sizeof(horas), stdin);
  sscanf(line, "%d", &horas);
  
if(horas>168){
  printf("es imposible hacer esas horas ya que 7 dias 168 horas");
  return 0;
  }

  printf("ingrese el salario por hora\n");
  fgets(line, sizeof(salario), stdin);
  sscanf(line, "%d", &salario);

  if(horas<=40){
    sueldo=(horas)*(salario);
  }
  else if(horas>40){
    sueldo=(40)*(salario);
    extra=(horas-40);
    
  }
  

sueldoex=((extra)*((salario)*(1.5)));
sueldof=(sueldo+sueldoex);
printf("el sueldo de la semana es %.2f\n",sueldof);
  return 0;
}
