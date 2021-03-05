#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* 	
eleitor 2
	@AUTHOR  tamires lima */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
		//variáveis
	int idade;
	printf("verificar obrigatoriedade de votar\n\n");
	//entrada
	printf("digite a sua idade: ");
	scanf("%d",&idade);
	//processamento/saída
	 if (idade < 16){
	 	printf("proibido votar\n");
	 } else if (idade > 17 && idade < 71){
	 	printf("voto obrigatório\n");
	 } else {
	 	printf("voto facultativo\n");
	 } 
	system("pause");	
	return 0;
}
