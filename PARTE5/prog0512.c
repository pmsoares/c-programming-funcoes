#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa  que verifique se um número é primo ou não, usando uma função
*/

int primo(int x) {
	int i = 2;
	while (i <= x / 2) {
		if (x % i == 0)
			return 0;
		i++;
	}
	return 1;

	/*for (i = 2; i <= x / 2; i++)
		if (x % i == 0)
			return 0;
	return 1;*/
}

int prog0512() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	if (primo(235))
		printf("É primo!");
	else
		printf("Não é primo!");

	return 0;
}