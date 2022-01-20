#include <stdio.h>
#include <locale.h>

/*
	Altere o programa anterior para permitir que escreva no ecrã qualquer carácter
	solicitado ao utilizador.
*/

int linhas2(int num, char ch) {
	int i;

	for (i = 1; i <= num; i++)
		putchar(ch);
	putchar('\n');

	return i;
}

void prog0506() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int teste;
	char ch;
	printf("Introduza um carácter: ");
	ch = getchar();

	teste = linhas2(3, ch);
	linhas2(5, ch);
	linhas2(7, ch);
	linhas2(5, ch);
	linhas2(3, ch);


}