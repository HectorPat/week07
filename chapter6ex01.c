#include <stdio.h>
#include <math.h>

int main(void) {
float Px, Py, Sx, Sy, Dist, Ar1, Ar2;
/*P significa primer, S significa segundo valor*/
/*Ar significa argumento que es el cuadrado de la resta*/
  printf("escriba la primera cordenada X\n");
  scanf("%f",&Px);
  printf("escriba la primera cordenada Y\n");
  scanf("%f",&Py);
  printf("escriba la segunda cordenada X\n");
  scanf("%f",&Sx);
  printf("escriba la segunda cordenada Y\n");
  scanf("%f",&Sy);

  Ar1=(Sx-Px)*(Sx-Px);
  /* esto eso (X2-X1)^2 */
  Ar2= (Sy-Py)*(Sy-Py);
   /* esto eso (Y2-Y1)^2 */
  Dist=sqrt((Ar1+Ar2));
  
  printf("tu distancia es %f unidades",Dist);
  return 0;
}
