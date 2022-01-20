#include <stdio.h>
#include <locale.h>

/*
	Pergunta 25
		Implemente a função:
			float VAL(float x, int n, float t)
		que devolve o VAL (Valor Atual Líquido) para n anos,
		à taxa t e é definido através da fórmula apresentada.

		Sugestão: Utilize a função Pot,
		implementada como exercício resolvido na sessão de formação.
*/

float Pot(float x, int n) {
	float res;
	int i;

	for (i = 1, res = 1.0; i <= n; i++)
		res *= x;

	return res;
}

float VAL(float x, int n, float t) {
	float res;
	int i;

	for (i = 1, res = 0; i <= n; i++)
		res += x / Pot(1 + t, i);

	return res;
}

int prog0515() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	float valor, taxa;
	int anos;

	puts("**** CÁLCULO DO VALOR ATUAL LÍQUIDO ****");
	printf("\nQual o valor que quer calcular? ");
	scanf_s("%f", &valor);
	printf("Por quantos anos? ");
	scanf_s("%d", &anos);
	printf("Qual a taxa? ");
	scanf_s("%f", &taxa);

	printf("O valor atual líquido é: %.2f", VAL(valor, anos, taxa));

	return 0;
}