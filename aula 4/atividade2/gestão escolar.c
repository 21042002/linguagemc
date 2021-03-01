#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*	
	direção escolar
	@author Tamires Lima
*/
 

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	system("color B1");
	printf("########  ######   ######   #######  ##          ###     \n");
	printf("##       ##    ## ##    ## ##     ## ##         ## ##    \n");
	printf("##       ##       ##       ##     ## ##        ##   ##   \n");
	printf("######    ######  ##       ##     ## ##       ##     ##  \n");
	printf("##             ## ##       ##     ## ##       #########  \n");
	printf("##       ##    ## ##    ## ##     ## ##       ##     ##  \n");
	printf("########  ######   ######   #######  ######## ##     ##  \n");
	printf(" ########  ####  ###### ##     ##     \n");
	printf("##     ##  ##  ##    ## ##     ##   \n");
	printf("##     ##  ##  ##       ##     ##   \n");
	printf("########   ##  ##       #########   \n");
	printf("##   ##    ##  ##       ##     ##   \n");
	printf("##    ##   ##  ##    ## ##     ##   \n");
	printf("##     ## ####  ######  ##     ##   \n");
	//funcionários
	char professor[30] = {"Tamires Lima, Julia Gonsalves, Tereza"}; 
	char diretores [2] = {"Robertos de Souza, Vanderson Pereira"};
	int periodo = 24;
	float cargaHoraria = 40.5;
	double salario = 5404,00;
	printf("escola rich \n");
	return 0;
}
