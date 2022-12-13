#include<stdio.h>
#include "questao2.h"

void inicializar_lista(LISTA *L){
	L->fim=0;
}

int lista_e_vazia(LISTA *L){
	if(L->fim==0)
		return 1;//verdadeiro
	else 
		return 0;//falso
}

int lista_e_cheia(LISTA *L){
	if(L->fim==MAX)
		return 1;
	else
		return 0;	
}

int insere_elemento(LISTA *L, int x){
	int aux, i;
	if(lista_e_cheia(L))
		return 0;
	else if(lista_e_vazia(L) || x>=L->lista[L->fim-1]){//caso 1 e caso3
		L->lista[L->fim]=x;
		L->fim++;
	}else{//caso que procura posicao correta do novo elemento
		for(aux=0;x>=L->lista[aux];aux++);//aux guarda a posicao correta do novo elemento (x)
		for(i=L->fim;i>aux;i--){
			L->lista[i]=L->lista[i-1];
		}
		L->lista[aux]=x;
		L->fim++;
		return 1; //inserido com sucesso
	}	
}

int remove_elemento(LISTA *L, int x)
{
	int i,aux;
	if(lista_e_vazia(L) || x<L->lista[0] || x>L->lista[L->fim-1])//Caso1,2,3: impossivel quando lista vazia OU elemento < 1 OU elemento > Ultimo
		return 0;
	else{
		for(aux=0;x>L->lista[aux];aux++);//aux guarda a posicao do elemento x
		if(x==L->lista[aux])//caso5: elemento a ser removido é encontrado
		{
			for(i=aux;i<L->fim-1;i++){
				L->lista[i]=L->lista[i+1];//desloca os elementos uma posicao a esquerda
			}
			L->fim--;
			return 1;
		}else{
			return 0; //elemento nao encontrado
		}
	}	
}

int maior(LISTA *L){
int i;
int maior_elemento = 0;
	for(i=0;i<L->fim;i++){
		if (maior_elemento < L->lista[i])
		maior_elemento < L->lista[i];
	}	
	printf ("%d", maior_elemento);
	return (1);
}

int media(LISTA *L){
	
	
	
}

void imprime(LISTA *L){
	int i;
	printf("\n LISTA");
	for(i=0;i<L->fim;i++){
		printf(" %d ",L->lista[i]);
	}
	printf("\n");
}

