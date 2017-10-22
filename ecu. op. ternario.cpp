#include <stdio.h>
int main(){
 float y, x, res;
 
 printf("Ingrese el valor de x:\n");
 scanf("%f",&x);
 if (x==2)
  {
 printf("No existe");
  }
 else
  { 
 res = x < 2 ? y=x*x+4*x-25  : y=4*x*x-3*x+0;
 printf("El valor de y es:%f",y);
 }
 return 0;
}
