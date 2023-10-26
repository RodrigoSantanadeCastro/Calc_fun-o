#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "biblioteca.h"


int main(int argc, char *argv[]){


 int op;
 float num1, num2;
 setlocale(LC_ALL, "Portuguese");
 do{
 printf("Calculadora \n");
 printf("Digite 1 para Soma \n");
 printf("Digite 2 para Subtrair \n");
 printf("Digite 3 para Multiplicar \n");
 printf("Digite 4 para Dividir \n");
 printf("Digite 0 para Sair \n");
 scanf("%d",&op);

 
 printf("Digite o primeiro numero");
 scanf("%f",&num1);
 printf("digite o segundo numero");
 scanf("%f",&num2);

switch(op) {

 case 1: soma (num1,num2);
	 break;

 case 2: subtracao(num1,num2);
	 break;

 case 3 : multiplicacao(num1,num2);
	  break;


 case 4: divisao(num1,num2);

	break;

}

}
while (op!=0);

return 0;}


