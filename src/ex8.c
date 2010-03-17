/*
 * ex8.c
 *
 *  Created on: 15/03/2010
 *      Author: Ari
 */

#include <stdio.h>
#include <stdlib.h>
int printVet(int v[], int tamanho);
int printInvert(int v[], int tamanho);


int ex8() {

	int tamanho = 0;
	puts("Digite a quantidade de itens no vetor: ");
	scanf("%d", &tamanho);

	int v[tamanho];
	int i = 0;
	int atual = 0;
	for (i = 0 ; i < tamanho ; i++ ){
		scanf("%d", &atual);
		v[i] = atual;
	}
	printVet(v, tamanho);
	printInvert(v,tamanho);
	return 0;
}

int printVet(int v[], int tamanho) {

	int j = 0;
	for( j = 0 ; j < tamanho ; j++) {
		printf("%d\n", v[j]);
	}
	return 0;
}

int printInvert(int v[], int tamanho) {
	puts("Invertida:");
	int k = tamanho;
	for(k = tamanho-1 ; k >= 0 ; k-- ) {
		printf("%d\n", v[k]);
	}
	return 0;
}
