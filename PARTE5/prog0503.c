#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que coloque no ecrã uma linha de 20 asteriscos
*/

void linha() {
	int i;

	for (i = 1; i <= 20; i++)
		putchar('*');
	putchar('\n');
}

void prog0503() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int i;

	linha();

	puts("Números entre 1 e 5");

	linha();

	for (i = 1; i <= 5; i++)
		printf("%d\n", i);

	linha();
}