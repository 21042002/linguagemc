#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	fundamentos da linguahgem c
	@author Tamires Lima
*/

int main(int argc, char *argv[]) {
	// a linha abaixo configura o idioma para o portugu�s
	setlocale(LC_ALL,"portuguese");
	// a linha abaixo modifica a cor do background (fundo) e do texto
	// color 1� fundo 2� texto
	system("color CE");
	printf("Ol� Mundo\n");
	printf("Tamires Lima\n");
	system("pause");
	printf("c�digo de cores\n\n");
	// a linha abaixo "limpa" a tela do prompt de comando
	system("cls");
	printf("c�digo de cores\n\n");
	system("color F0"); 
	printf("0- preto\n");
	printf("1- azul\n");
	printf("2- verde\n");
	printf("3- verde �gua\n");
	printf("4- vermelho\n");
	printf("5- roxo\n");
	printf("6- amarelo\n");
	printf("7- branco\n");
	printf("8- cinza\n");
	printf("9- azul claro\n");
	printf("A- verde claro\n");
	printf("B- verde claro �gua\n");
	printf("C- vermelho claro\n");
	printf("D-l�las\n");
	printf("E-amarelo claro\n");
	printf("F-branco brilhante\n");
	system("pause");
	return 0;
}
