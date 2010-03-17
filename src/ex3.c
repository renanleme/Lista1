/*
 * ex3.c
 *
 *  Created on: 15/03/2010
 *      Author: Ari
 */

#include <stdio.h>
#include <stdlib.h>
float calculaMedia(float v[], int tamanho);

int ex3() {

	puts("Digite a quantidade de números: ");
	int tamanho = 0;
	scanf("%d", &tamanho);

	float v[tamanho];

	int i = 0;
	for ( i = 0 ; i < tamanho ; i++ ){
		scanf("%f", &v[i]);
	}

	float result = 0;
	result = calculaMedia(v,tamanho);
	printf("A média obtida é: %2.2f", result);
	return 0;
}

float calculaMedia(float v[], int tamanho) {
	int j = 0;
	float soma = 0;
	for (j = 0 ; j < tamanho ; j++ ) {
		soma += v[j];

	}


	soma = soma / tamanho;
	return soma;
}
