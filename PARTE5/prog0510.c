#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa x_toupper que transforma qualquer carácter na maiúscula correspondente.
	Escreva um programa de teste da função.
*/

int x_toUpper(char ch) {
	/*if (ch >= 'a' && ch <= 'z')
		return ch + 'A' - 'a';
	else
		return ch;*/

	return (ch >= 'a' && ch <= 'z') ? ch + 'A' - 'a' : ch;
}

int prog0510() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char c;

	while (1) {
		c = getchar();
		putchar(x_toUpper(c));
	}

	return 0;
}