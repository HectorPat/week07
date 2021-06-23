#include <stdio.h>
#include <math.h>

int main(void) {
char Px[5]; 
char Py[5]; 
char Sx[5]; 
char Sy[5]; 
float Dist;
float Ar1; 
float Ar2;
/*P significa primer, S significa segundo valor*/
/*Ar significa argumento que es el cuadrado de la resta*/
  printf("escriba la primera cordenada X\n");
  fgets(Px,5,stdin);
  printf("escriba la primera cordenada Y\n");
  fgets(Py,5,stdin);
  printf("escriba la segunda cordenada X\n");
  fgets(Sx,5,stdin);
  printf("escriba la segunda cordenada Y\n");
  fgets(Sx,5,stdin);

  Ar1=(Sx-Px)*(Sx-Px);
  /* esto eso (X2-X1)^2 */
  Ar2= (Sy-Py)*(Sy-Py);
   /* esto eso (Y2-Y1)^2 */
  Dist=sqrt((Ar1+Ar2));
  
  printf("tu distancia es %f unidades",Dist);
  return 0;
}
