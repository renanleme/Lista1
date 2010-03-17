#include <stdlib.h>
#include <stdio.h>

int ex4() {
	fflush(stdin);
	int qnt;

	printf("Quantos números primos você deseja?\n");


	scanf("%d",&qnt);
	fflush(stdin);
	int i = 0;
	int j = 2;
	int k = 0;

	short flag = 0;

	while ( i < qnt) {
		flag = 0;
		for(k = 2; k < j; k++)
		{

			if (j%k == 0)
			{
				flag = 1;
				break;
			}
		}

		if(flag == 0)
		{
			printf("%d e primo.\n",j);
			i++;
		}

		if(j != 2)
			j += 2;
		else
			j += 1;

	}
	return 0;
}
