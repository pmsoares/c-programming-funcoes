#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que coloque no ecr� o seguinte output,
	escrevendo a linha de 20 asteriscos atrav�s de um ciclo for.
		********************
		N�meros entre 1 e 5
		********************
		1
		2
		3
		4
		5
		********************
*/

void prog0501() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int i;

	for (i = 1; i <= 20; i++)
		putchar('*');
	putchar('\n');

	puts("N�meros entre 1 e 5");

	for (i = 1; i <= 20; i++)
		putchar('*');
	putchar('\n');

	for (i = 1; i <= 5; i++)
		printf("%d\n", i);

	for (i = 1; i <= 20; i++)
		putchar('*');
	putchar('\n');
}