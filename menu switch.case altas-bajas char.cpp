#include<stdio.h>
#include<ctype.h>
char op; 
main()
{
	puts("------------MENU-------------");
	printf("a) Altas\n");
	printf("b) Bajas\n");
	printf("c) Cambios\n");
	printf("Selecciona una opcion\t");
	scanf("%c",&op);
    op=tolower(op);
	switch (op)
	  {
	  	case 'a':
	  		printf("\nSeleccionaste altas");
	  	break;
	  	case 'b':
	  		printf("\nSeleccionaste bajas");
	  	break;
	  	case 'c':
	  		printf("\nSeleccionate cambios");
	  	break;
	  	default:
	  		printf("\ninvalido");
	  }
}
