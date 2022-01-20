#include <stdio.h>
#include <locale.h>

/*
	Implemente a função
		float Pot(float x, int n)
	Devolve o valor de x elevado a n.
		Exemplo:
			x elevado a 0 = 1.0
			x elevado a n = x * x * ... * x (n vezes)
*/

float Pot1(float x, int n) {
	float res;
	int i;

	for (i = 1, res = 1.0; i <= n; i++)
		res *= x;
	return res;
}

int prog0511() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	printf("%f %f %f\n", Pot1(2.0F, 3), Pot1(1.234F, 4), Pot1(3.0F, 0));

	return 0;
}