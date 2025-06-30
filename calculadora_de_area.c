#include <stdio.h>
#define PI 3.14159


int main () {

int op;
float a, b, c, resultado;


printf("==============================================");
printf("\nCALCULADORA DE ÁREA\n");
printf("==============================================");

printf("\nQUADRADO DIGITE 1\n");
printf("\nTRIÂNGULO DIGITE 2 \n");
printf("\nRETANGULO DIGITE 3\n");
printf("\nCIRCULO DIGITE 4\n");
scanf("%d",&op);

switch (op) {
 case 1: 
	 printf("\nDigite o primeiro lado do quadrado:\n");
	 scanf("%f",&a);
	 resultado = a * a;
	 printf("\n===================================================\n");
	 printf("\n\tA área do quadrado é %.2f \n",resultado);
	 printf("\n===================================================\n");
	 break;
case 2: 
	printf("\nDigite a BASE do triâgulo:\n");
        scanf("%f",&a);
	printf("\nDigite a ALTURA do triâgulo:\n");
	scanf("%f",&b);
        resultado = (a * b)/2;
        printf("\n===================================================\n");
        printf("\n\tA área do triângulo é %.2f \n",resultado);
        printf("\n===================================================\n");
        break;
case 3:
	printf("\nDigite a BASE do retângulo:\n");
	scanf("%f",&a);
	printf("\nDigite a ALTURA do retângulo:\n");
        scanf("%f",&b);
        resultado = a * b;
        printf("\n===================================================\n");
        printf("\n\tA área do retângulo é %.2f \n",resultado);
        printf("\n===================================================\n");
        break;
case 4: 
	printf("\nDigite o RAIO do circulo:\n");
	scanf("%f",&a);
        resultado = PI*(a*a);
        printf("\n===================================================\n");
        printf("\n\tA área do circulo  é %.2f unidades² \n",resultado);
        printf("\n===================================================\n");
        break;

default:
	printf("OPÇÃO NÃO EXISTE\n");
}
return (0);
}






