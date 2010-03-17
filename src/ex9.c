/*
 * ex9.c
 *
 *  Created on: 10/03/2010
 *      Author: Ari
 */
#include <stdio.h>
#include <stdlib.h>


int ex9() {

#define MAX 10

int v[MAX];

int j = 0;
int atual = 0;
for (j = 0 ; j < MAX ; j++) {
	scanf("%d",&atual);
	v[j] = atual;
}

int numero =0;
numero = min_vet(v);
printf("%d",numero);

return 0;

}
int min_vet(int v[]) {
	int i = 0;
	int menor = 9999;
	for (i = 0 ; i < MAX ; i++) {
		if ( v[i] < menor ) {
			menor = v[i];
		}
	}
	return menor;

}
