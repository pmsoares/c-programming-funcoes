#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que coloque no ecrã uma linha de 20 asteriscos 
*/

void linha_1() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int i;

	for (i = 1; i <= 20; i++)
		putchar('*');
	putchar('\n');
}