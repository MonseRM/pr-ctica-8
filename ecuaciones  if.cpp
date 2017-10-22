#include<stdio.h>
int x,y;
main()
{
	printf("Dame el valor de x\n");
	scanf("%d",&x);
	if (x>2)
	 {
		y=x*x-4*x+20;
		printf("El valor de y=%d\n",y);
	 }
	else 
	    if(x<2)
	      {
	         y=4*x*x-2*x+0;
	         printf("El valor de y=%d\n",y);
	      }
	    else
	         printf("\nNo tiene solucion");
}
