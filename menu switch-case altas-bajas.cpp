#include<stdio.h>
int num;
main()
{
	puts("------------MENU-------------");
	printf("1-Altas\n");
	printf("2-Bajas\n");
	printf("3-Cambios\n");
	printf("Selecciona una opcion\t");
	scanf("%d",&num);
	switch (num)
	  {
	  	case 1:
	  		printf("\nSeleccionaste altas");
	  	break;
	  	case 2:
	  		printf("\nSeleccionaste bajas");
	  	break;
	  	case 3:
	  		printf("\nSeleccionate cambios");
	  	break;
	  	default:
	  		printf("\ninvalido");
	  }
}
