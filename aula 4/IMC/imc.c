#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 
	c�lculo do IMC
	@author tamires lima
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	system("color 1F");
	printf("d888888b .88b  d88.  .o88b. \n");
	printf("  `88'   88'YbdP`88 d8P  Y8 \n");
	printf("   88    88  88  88 8P      \n");
	printf("   88    88  88  88 8b      \n");
	printf("  .88.   88  88  88 Y8b  d8 \n");
	printf("Y888888P YP  YP  YP  `Y88P' \n");
	printf("c�lculo do IMC\n");
	//vari�veis
	float imc,peso,altura;
	//entrada
	printf("digite o seu peso em kg: "); 
	scanf("%f",&peso);
	printf("digite a sua a�tura em metros: ");
	scanf("%f",&altura);
	//processamento
	imc = peso / (altura*altura);
	//sa�da
	printf("IMC: %.2f\n",imc);
	system("pause");
	return 0;
}
