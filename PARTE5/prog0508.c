#include <stdio.h>
#include <locale.h>

/*
	Escreva uma fun��o que calcule qual o maior de dois n�meros
*/

int max(int a, int b) {
	/*if (a > b)
		return a;
	else
		return b;*/

	return a > b ? a : b;
}

int prog0508() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int num1, num2;

	puts("Introduza dois n�meros inteiros:");
	scanf_s("%d%d", &num1, &num2);

	printf("O maior �: %d\n", max(num1, num2));


	return 0;
}