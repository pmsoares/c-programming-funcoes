#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que, recorrendo a três funções distintas, escreva no ecrã o seguinte output:
		***
		*****
		*******
		*****
		***
*/

void linha3() {
	int i;

	for (i = 1; i <= 3; i++)
		putchar('*');
	putchar('\n');
}

void linha5() {
	int i;

	for (i = 1; i <= 5; i++)
		putchar('*');
	putchar('\n');
}

void linha7() {
	int i;

	for (i = 1; i <= 7; i++)
		putchar('*');
	putchar('\n');
}

void prog0504() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	linha3();
	linha5();
	linha7();
	linha5();
	linha3();
}