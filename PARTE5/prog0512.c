#include <stdio.h>
#include <locale.h>

/*
	Escreva um programa  que verifique se um n�mero � primo ou n�o, usando uma fun��o
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
		printf("� primo!");
	else
		printf("N�o � primo!");

	return 0;
}