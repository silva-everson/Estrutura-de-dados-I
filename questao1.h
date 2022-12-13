//LISTA NAO ORDENADA ESTATICA SEQUENCIAL
#define MAX 10 //tamanho max lista

typedef struct{
	int fim;
	int lista[MAX];
}LISTA;

void inicializar_lista(LISTA *L);

int lista_e_vazia(LISTA *L);

int lista_e_cheia(LISTA *L);

int insere_elemento(LISTA *L, int x);

int remove_elemento(LISTA *L, int x);

void imprime(LISTA *L);

int tamanho (LISTA *L, int acumuladora);

int maior (LISTA *L, int maior_elemento);

int remove_elemento_p (LISTA *L, int x);




