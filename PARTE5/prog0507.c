#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa que solicite dois números ao utilizador
	e apresente no ecrã o resultado da sua soma e o dobro de cada um deles.
*/

int soma(int num1, int num2) {
	return num1 + num2;
}

int dobro(int num) {
	return num * 2;
}

int prog0507() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int num1, num2;

	puts("Introduza dois números inteiros:");
	scanf_s("%d%d", &num1, &num2);

	printf("%d + %d = %d\n", num1, num2, soma(num1, num2));
	printf("2 * %d = %d e 2 * %d = %d\n", num1, dobro(num1), num2, dobro(num2));

	return 0;
}