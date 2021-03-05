#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
  Exemplo de uso dos operadores lógicos 
  @authro Tamires Lima
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	//variáveis
	int idade;
	printf("verificar obrigatoriedade de votar\n\n");
	//entrada
	printf("digite a sua idade: ");
	scanf("%d",&idade);
	//processamento/saída
	if (idade < 16){
		printf("proibido votar\n");
	} else if (idade < 18){
		printf("voto facultativo\n");
	} else if (idade < 71){
		printf("obrigatório votar\n");
	} else{ 
		printf("voto facultativo\n");
	}
	system("pause");
	return 0;
}
