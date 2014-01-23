#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "algoritimogenetico.h"

void troca(int*,int*);

int main(int arg, char* args[]){
	struct Item *a;
	int i;
	a = malloc(100 * sizeof(struct Item));

	for (i = 0; i< 100; i++ ){
		a[i].valor = i;
	}

	for (i = 0; i < 100; i++ ){
		printf("Valor: %d\n", a[i].valor );
	}
	return 0;
}

void troca (int *p, int *q){
	int temp;

	temp = *p;
	*p = *q;
	*q = temp;
}
