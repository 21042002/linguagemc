#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*	
	gestão escolar
	@Aurthor Tamires Lima
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portugueses");
	system("Color B0");
	printf("########   #######  ##       ######## ######## #### ##     ##   \n");
	printf("##     ## ##     ## ##       ##          ##     ##  ###   ###   \n");
	printf("##     ## ##     ## ##       ##          ##     ##  #### ####  \n");
	printf("########  ##     ## ##       ######      ##     ##  ## ### ##   \n");
	printf("##     ## ##     ## ##       ##          ##     ##  ##     ##   \n");
	printf("##     ## ##     ## ##       ##          ##     ##  ##     ##   \n");
	printf("########   #######  ######## ########    ##    #### ##     ##   \n");
	//entrada de dados 
	char diretor[30] = {"tamires lima"};
	char professor = {"tamires lima"};
	int periodo = 40;
	float cargaHoraria = 6.20;
	printf("boletim escolar \n");
	printf("_____________________________\n");
	//irá ler uma variável
	// , (vírgula) concatenar(unir) um texto com o conteúdo da variável
	printf("Professor: %f \n",professor);
	printf("professor (s/n): %f \n", professor);
	printf("Período: %d\n", periodo);
	printf("Carga horária semanal: %.1f\n", cargaHoraria);
	printf("_____________________________\n");
	system("pause");
	system("cls");
	//entrada de dados
	char aluno[50];
	int numero;
	int serie;
	float matematica;
	float quimica;
	float fisica;
	float portugues;
	printf("cadastro do boletim \n\n");
	printf("Nome do aluno(a): ");
	gets(aluno);	
	printf("numero(0/10): ");
	scanf("%d",&serie);
	printf("Idade: ");
	scanf("%f" ,&matematica);
	scanf("%f" ,&quimica);
	scanf("%F" ,&fisica);
	scanf("%f" ,&portugues);
	printf("1 bimestre: ");
	printf("2 bimestre: ");
	printf("3 bimestre: ");
	printf("4 bimestre: ");
	scanf("%f", &matematica);
	scanf("%f", &quimica);
	scanf("%f", &portugues);
	scanf("%f", &fisica);
	printf("\n");
	system("pause");
	system("cls");
	printf("Ficha do aluno(a):\n");
	printf("______________________________\n");
	printf("matematica: %3f\n", matematica);
	printf("quimica: %3f\n", quimica);
	printf("portugues: %3f\n", portugues);
	printf("fisica: %.3f\n", fisica);
	printf("______________________________\n");
	//processando
	system("pause");
	return 0;
}
