#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que, recorrendo a tr�s fun��es distintas, escreva no ecr� o seguinte output:
		***
		*****
		*******
		*****
		***
*/

void linhas(int num) {
	int i;

	for (i = 1; i <= num; i++)
		putchar('*');
	putchar('\n');
}

void prog0505() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	linhas(3);
	linhas(5);
	linhas(7);
	linhas(5);
	linhas(3);
}