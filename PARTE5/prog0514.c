#include <stdio.h>
#include <locale.h>
#include <ctype.h>

/*
	Pergunta 24
		Implemente a função:
			int isVogal(char ch)
		que verifica se ch é uma das vogais do Alfabeto (minúscula ou maiúscula).
*/


// 3 formas de implementar esta função:


// VERSÃO1
int isVogal_v1(char ch) {
	return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

// VERSÃO2
int isVogal_v2(char ch) {
	ch = toupper(ch);
	return ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U';
}

// VERSÃO3
int isVogal_v3(char ch) {
	switch (tolower(ch)) {
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		return 1;
	default:
		return 0;
	}
}

int prog0514() {
	setlocale(LC_ALL, "Portuguese_Portugal");

	char c;

	printf("Introduza um carácter: ");
	c = getchar();

	if (isVogal_v1(c))
		printf("'%c' é uma vogal!\n", c);
	else
		printf("'%c' não é uma vogal!\n", c);

	return 0;
}