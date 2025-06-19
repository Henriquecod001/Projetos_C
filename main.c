#include <stdio.h>

int main () {
double  dolar = 5.42, euro = 5.80, libra = 6.85,real,resultado;
int a;
printf("=========================================");
printf("\n\tCONVERSOR DE MOEDAS DO HENRIQUE\n");
printf("=========================================");
printf("\n\nSelecione 1 para converter para dolar\n");
printf("Selecione 2 para converter para libra\n");
printf("Selecione 3 para converter para euro\n");
scanf("%d",&a);

switch (a){
	case 1:
	 printf("------------------------------------------------------------");
	 printf("\n\t\tCONVERTENDO PARA DOLAR US\n");
	 printf("------------------------------------------------------------");
	 printf("\n\nDigite o valor em R$:\n");
	 scanf("%lf",&real);
	 resultado = real / dolar;
	 printf("\nVocê tem %.2lf U$\n",resultado);
	break;
	case 2:
	 printf("------------------------------------------------------------");
	 printf("\n\tCONVERTENDO PARA LIBRAS\n");
	 printf("------------------------------------------------------------");
	 printf("\n\nDigite o valor em R$\n");
	 scanf("%lf",&real);
	 resultado = real / libra;
  	 printf("\n Você tem %.2lf em libras\n",resultado);
	break;
	case 3:
	 printf("------------------------------------------------------------");
	 printf("\n\tCONVERTENDO PARA EURO\n");
	 printf("------------------------------------------------------------");
	 printf("\n\nDigite o valor em R$: \n");
	 scanf("%lf",&real);
	 resultado = real / euro;
	printf("\nVocê tem %.2lf em euro!\n", resultado);
	break;
	default:
	 printf("\nOPÇÃO INVÁLIDA!\n");
}
return 0;
}
