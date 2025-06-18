#include <stdio.h>
#include <string.h>

int main () {

char email [50];
char senha [20];
char emaild [50];
char senhad [20];

printf("====================================");
printf("\n\tFAÇA SEU CADASTRO!\n");
printf("====================================");

printf("\n\n\tDigite o seu o email:\n");
scanf("%49s",email);
printf("\tCadastre sua senha:\n");
scanf("%19s",senha);

printf("====================================");
printf("\n\tVAMOS PARA O LOGIN!\n");
printf("====================================");

printf("\n\tDigite seu email cadastrado:\n");
scanf("%49s",emaild);
printf("\tDigite sua senha definida no inicio:\n");
scanf("%19s",senhad);

if (strcmp(email,emaild) == 0 && strcmp(senha,senhad)== 0) {
 printf("\tLOGIN FEITO COM SUCESSO!\n");
} else {
  printf("\tEMAIL OU SENHA INCORRETOS!\n");
}

return (0);
}
