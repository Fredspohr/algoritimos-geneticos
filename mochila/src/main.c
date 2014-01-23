#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include "algoritimogenetico.h"

void troca(int*,int*);

int main(int arg, char* args[]){
	Cromossomo *a;
	int i;
	
	a = malloc(sizeof(Cromossomo));
	a->genes = malloc(8 * sizeof(Gene));

	
	for(i = 0;i < 8; i++){
		a->valor[i] = i;
	}
	
	for(i = 0;i < 8; i++){
		printf("Valor: %d\n",a->valor[i]);
	}


	return 0;
}
