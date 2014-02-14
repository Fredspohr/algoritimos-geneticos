#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>
#include "algoritimogenetico.h"

void troca(int*,int*);
int random_number(int min_num, int max_num);

int main(int arg, char* args[]){
	Cromossomo *cromossomo;
	int i;
	
	
	cromossomo = malloc(sizeof(Cromossomo));
	cromossomo->genes = malloc(8 * sizeof(Gene));
	
	for(i = 0;i < 8; i++){
		cromossomo->valor[i] = i;
	}

	for(i = 0;i < 8; i++){
		printf("Valor: %d\n",cromossomo->valor[i]);
	}
	
	for(i = 7; i >= 0; i--){	
		cromossomo->genes[i].peso = random_number(0,1) ;
	}
	for(i = 0;i < 8; i++){
		printf("Peso: %d\n",cromossomo->genes[i].peso);
	}

	return 0;
}


/*
        int main(void) {
          printf("Min : 1 Max : 30 %d\n",random_number(0,5));
          printf("Min : 100 Max : 1000 %d\n",random_number(100,1000));
          return 0;
        }
*/
        int random_number(int min_num, int max_num)
        {
            int result=0,low_num=0,hi_num=0;
            if(min_num<max_num)
            {
                low_num=min_num;
                hi_num=max_num+1; // this is done to include max_num in output.
            }else{
                low_num=max_num+1;// this is done to include max_num in output.
                hi_num=min_num;
            }
            srand(rand()*time(NULL));
            result = (rand()%(hi_num-low_num))+low_num;
            return result;
        }
