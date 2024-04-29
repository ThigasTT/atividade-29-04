#include <stdio.h>
#include <stdlib.h>

void main () {
    
    int numero1;
    int numero2;
    int resultado;
    int opcoes;

    printf("digite um numero\n");
    scanf("%d",&numero1);
    printf("digite outro numero\n");
    scanf("%d",&numero2);
    printf("digite qual operacao voce quer fazer\n");
    printf("1-adicao\n");
    printf("2-subtracao\n");
    printf("3-multiplicacao\n");
    printf("4-divisao\n");
    printf("5-continuar\n");
    printf("6-sair\n");
    scanf("%d",&opcoes);

    switch (opcoes) {

       case 1:
	       resultado =numero1+numero2;
	       printf("Resultado: %d\n",resultado);
	       break;

       case 2:
	       resultado=numero1-numero2;
	       printf("Resultado: %d\n",resultado);
	       break;

       case 3:
	       resultado=numero1*numero2;
	       printf("Resultado:%d\n",resultado);
	       break;

       case 4:
	       resultado=numero1/numero2;
	       printf("Resultado:%d\n",resultado);
	       break;

	       

       case 5: printf("encerrando...");
	       break;

    }
 
while(opcoes=6){
	printf("digite um numero\n");
    scanf("%d",&numero1);
    printf("digite outro numero\n");
    scanf("%d",&numero2);
	printf ("digite qual operacao voce quer fazer\n");
	printf("1-adicao\n");
	printf("2-subtracao\n");
	printf("3-multiplicacao\n");
	printf("4-divisao\n");
	printf("5-continuar\n");
	printf("6-sair\n");
	scanf("%d",&opcoes);
		
	switch (opcoes) {
		case 1:
			resultado =numero1+numero2;
			printf("Resultado: %d",resultado);
			break;
		case 2:
			resultado=numero1-numero2;
			printf("Resultado:%d",resultado);
			break;
		case 3:
			resultado=numero1*numero2;
			printf("Resultado:%d",resultado);
			break;
		case 4:
			resultado=numero1/numero2;
			printf("resultado:%d",resultado);
			break;
		case 6:
			printf("encerrando o programa");
		break;
}
	
		
}

}
