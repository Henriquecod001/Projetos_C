#include <stdio.h>
#include <ctype.h>

int main () {


char opcion;

printf("Digite uma letra\n");
scanf(" %c", &opcion);

opcion = tolower (opcion);

switch (opcion){
	case 'a':
	 printf("OPÇÃO A\n");
	 break;
	case 'b':
	 printf("OPÇÃO B\n");
	 break;
	case 'c' :
	 printf("OPÇÃO C\n");
	 break;
	default:
	 printf("OPÇÃO INVÁLIDA!\n");
}

return (0);

}
