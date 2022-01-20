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