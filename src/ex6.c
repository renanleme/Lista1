/*
 * ex6.c
 *
 *  Created on: 10/03/2010
 *      Author: Ari
 */
#include <stdio.h>
#include <stdlib.h>


	int ex6() {

		int qnt = 0;
		int i = 0;
		scanf("%d",&qnt);

		for (i =0; i < qnt; i++ ) {
			int x = fibo(i);
			printf("Fibonacci para %d: %d\n",i, x);
		}
		return 0;
	}
	int fibo(int i) {
		if (i == 0) {
			return 1;
		}
		if (i == 1 ) {
			return 1;
		}
		if ( i >= 2) {
			return fibo(i-1) + fibo(i-2);
		}
		return 0;
	}


