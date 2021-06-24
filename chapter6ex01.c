#include <stdio.h>
#include <math.h>

int main() {
char line[3];  
int Px; 
int Py; 
int Sx; 
int Sy; 
float Dist;
float Ar1; 
float Ar2;
/*P significa primer, S significa segundo valor*/
/*Ar significa argumento que es el cuadrado de la resta*/
  printf("escriba la primera cordenada X\n");
  fgets(line, sizeof(Px), stdin);
  sscanf(line, "%d", &Px);
  printf("escriba la primera cordenada Y\n");
  fgets(line, sizeof(Py), stdin);
  sscanf(line, "%d", &Py);
  printf("escriba la segunda cordenada X\n");
  fgets(line, sizeof(Sx), stdin);
  sscanf(line, "%d", &Sx);
  printf("escriba la segunda cordenada Y\n");
  fgets(line, sizeof(Sy), stdin);
  sscanf(line, "%d", &Sy);

  Ar1=(Sx-Px)*(Sx-Px);
  /* esto eso (X2-X1)^2 */
  Ar2= (Sy-Py)*(Sy-Py);
   /* esto eso (Y2-Y1)^2 */
  Dist=sqrt((Ar1+Ar2));
  
  printf("tu distancia es %f unidades",Dist);
  return 0;
}
