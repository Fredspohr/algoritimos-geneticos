#include <stdio.h>
#include <stdlib.h>
#include "algoritimogenetico.h"

void troca(int*,int*);
int main(int arg, char** args){	

/*
	printf("Número de parametros: %d\n", a.peso);

	for(int i = 0; i < arg; i++){
		printf("Parametro #%d: %s\n",i+1,args[i]); 
	}
	imprime();
*/
/*
	char *a, *b;
	a = "uva";
	b = "abacate";
	if (a < b)
	   printf( "%s vem antes de %s no dicionário", a, b);
	else
	   printf( "%s vem depois de %s no dicionário", a, b);
*/
	Item *a;
	
	a = (Item *)malloc(100 * sizeof(Item));	
	for (int i = 0; i< 100; i++ ){
		*(a+i)->valor = i;
	}
	for (int i = 0; i < 100; i++ ){
		printf("Valor: %d\n", a[i].valor );
	}
}

void troca (int *p, int *q){
	int temp;

	temp = *p;
	*p = *q;
	*q = temp;
}
