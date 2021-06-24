#include <stdio.h>

int main(void) {
  char line[3];
  int importe;
  int quarters=0; /*25 centavos*/ 
  int dimes=0; /*10 centavos*/
  int nickels=0; /*5 centavos*/
  int pennies=0; /*1 centavo*/

  printf("ingrese valor en centavos (entre 0 y 100)\n");
  fgets(line, sizeof(importe), stdin);
  sscanf(line, "%d", &importe);
 do{
   printf("esta fuera del parametro, intentelo nuevamente\n");
   fgets(line, sizeof(importe), stdin);
  sscanf(line, "%d", &importe);
 }while ((importe>100));
do{
   printf("esta fuera del parametro, intentelo nuevamente\n");
   fgets(line, sizeof(importe), stdin);
  sscanf(line, "%d", &importe);
 }while ((importe<1)); 


 while(1){
   
   if(importe>=25){
     importe-= 25;
     quarters++;
     
   }
   else if (importe>=10){
     importe-= 10;
     dimes++;
   }
   else if (importe>=5){
     importe-= 5;
     nickels++;
   }
   else if (importe>=1){
     importe-=1;
     pennies++;
   }
   else if (importe==0){
     break;
   }

 }
  printf("su cambio es:\n %d quarters\n %d dimes\n %d nickels\n %d pennies", quarters, dimes, nickels, pennies);

  return 0;
}
