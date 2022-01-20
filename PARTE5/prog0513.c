#include <stdio.h>
#include <locale.h>

/*
	Pergunta 23
		Implemente a função:
			int Abs(int x)
		que devolve o valor absoluto de x.

			Exemplos:
				Abs(-5) devolve 5
				Abs(5) devolve 5
*/

int Abs(int x) {
	return (x >= 0) ? x : -x;
}

int prog0513() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	printf("%d\n", Abs(-5));
	printf("%d\n", Abs(5));

	return 0;
}