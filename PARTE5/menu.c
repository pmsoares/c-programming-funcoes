#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include "parte5.h"

int main() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	int opcao;
	char lixo;
	do
	{
		system("cls");
		printf("\033[0;37m\033[41m*** MENU ***\033[0m\n");
		printf("3 - Programa 0503\n");
		printf("12 - Programa 0512\n");
		printf("\n0 - SAIR\n");

		scanf_s("%d", &opcao);

		switch (opcao) {
		case 3:
			system("cls");
			lixo = getchar();
			prog0503();
			lixo = getchar();
			system("cls");
			break;

		case 12:
			system("cls");
			lixo = getchar();
			prog0512();
			lixo = getchar();
			system("cls");
			break;

		case 0:
			puts("Até sempre!!");
			break;

		default:
			puts("Opção errada");
		}
	} while (opcao);

	return 0;
}