
typedef struct {
	int peso;
}Gene;

typedef struct {
	int valor[8]; 
	Gene *genes;
}Cromossomo;



void iniciarPopulacao(int);
void crossover();
void mutacao();
void avaliacao();
void imprime();
