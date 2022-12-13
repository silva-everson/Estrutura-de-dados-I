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

int maior(LISTA *L);

int media(LISTA *L);


