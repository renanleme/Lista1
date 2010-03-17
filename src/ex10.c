/*
 * ex10.c
 *
 *  Created on: 15/03/2010
 *      Author: Ari
 */

#include <stdio.h>
#include <stdlib.h>

int verificaIguais(int v[], int tamanho);

int ex10() {

	puts("Digite a quantidade de elementos no vetor");
	int tamanho = 0;
	scanf("%d", &tamanho);
	int v[tamanho];

	int i = 0;

	for ( i = 0 ; i < tamanho ; i++) {
		scanf("%d", &v[i]);

	}

	int result = 0;

	result = verificaIguais(v, tamanho);

	if ( result == 0) {
		puts("Não se repitiram");
	} else {
		puts("Se repitiram");
	}
	return 0;
}

	int verificaIguais(int v[], int tamanho){

		int j = 0;
		int k = 0;
		int flag = 0;
		for ( j = 0 ; j < tamanho ; j++) {
			for ( k = 0 ; k < tamanho ; k++ ) {
				if ( (v[j] == v[k]) && ( j != k) ) {
					flag = 1;
					break;
				}
				if ( flag == 1) {
					break;
				}
			}
		}
		return flag;
	}




