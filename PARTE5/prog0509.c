#include <stdio.h>
#include <locale.h>

/*
	Escreva a fun��o x_isdigit que verifica se um determinado car�cter � d�gito ou n�o.
	Escreva um programa de teste da fun��o.
*/

int x_isdigit(char ch) {
	return ch >= '0' && ch <= '9';
}

int prog0509() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char c;
	while (1) {
		c = getchar();
		if (!x_isdigit(c))
			putchar(c);
	}

	return 0;
}