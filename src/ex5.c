/*
 * ex5.c
 *
 *  Created on: 10/03/2010
 *      Author: Ari
 */

#include <stdio.h>
#include <stdlib.h>

int ex5() {
	char frase[50];
	gets(frase);
	int tam = strlen(frase);
	int i = 0;
	int vogais = 0;
	int remove = 0;
	for(i = 0; i < tam ; i++) {
		if ((frase[i] == 'a' ) || (frase[i] == 'e' ) || (frase[i] == 'i' ) || (frase[i] == 'o' ) || (frase[i] == 'u' ) || (frase[i] == 'A' )
		|| (frase[i] == 'E' ) || (frase[i] == 'I' ) || (frase[i] == 'O' ) || (frase[i] == 'U' )) {
			vogais = vogais + 1;
		}
		if ( frase[i] == ' ' ) {
			remove = remove + 1;
		}
	}

	tam = tam - remove;

	printf("O número de vogais é: %d\n", vogais);
	printf("O número total de letras é: %d", tam);

	return 0;
}
