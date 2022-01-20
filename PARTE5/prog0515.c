#include <stdio.h>
#include <locale.h>

/*
	Pergunta 25
		Implemente a fun��o:
			float VAL(float x, int n, float t)
		que devolve o VAL (Valor Atual L�quido) para n anos,
		� taxa t e � definido atrav�s da f�rmula apresentada.

		Sugest�o: Utilize a fun��o Pot,
		implementada como exerc�cio resolvido na sess�o de forma��o.
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

	puts("**** C�LCULO DO VALOR ATUAL L�QUIDO ****");
	printf("\nQual o valor que quer calcular? ");
	scanf_s("%f", &valor);
	printf("Por quantos anos? ");
	scanf_s("%d", &anos);
	printf("Qual a taxa? ");
	scanf_s("%f", &taxa);

	printf("O valor atual l�quido �: %.2f", VAL(valor, anos, taxa));

	return 0;
}