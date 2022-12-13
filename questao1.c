#include<stdio.h>
#include "questao1.h"

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
	if(lista_e_cheia(L))
		return 0;
	else{
		L->lista[L->fim]=x;
		L->fim++;
		return 1;
	}	
}

int remove_elemento(LISTA *L, int x)
{
	int i;
	if(lista_e_vazia(L)==0){
		return 0;	
	}
	else{
		//PROCURA ELEMENTO A SER REMOVIDO
		for(i=0;i<L->fim;i++){
			if(L->lista[i]==x)//elemento foi encontrado!
			{
				while(i!=L->fim)
				{
					L->lista[i]=L->lista[i+1];
					i++;
				}
				L->fim--;
				return 1;
			}	
		}	
		return 0;
	}	
}

void imprime(LISTA *L){
	int i;
	printf("\n LISTA");
	for(i=0;i<L->fim;i++){
		printf(" %d ",L->lista[i]);
	}
	printf("\n");
}

int tamanho(LISTA *L, int aculmuladora){
	int i;
	if(L->fim==0)
		return 1;
		else {
			for (i=0;i<L->fim;i++){
				int acumuladora = L->fim;
			}
			return (0);
		}

}

int maior (LISTA *L, int maior_elemento){
	
	if(lista_e_vazia(L)==0){
		return (0);
	} else {
		int i;
	maior_elemento = L -> lista[0];	
	for (i=0;i<L->fim;i++){
		if (L -> lista[i] > maior_elemento)
		maior_elemento = L -> lista[i];
	}
	}
	
	return (1);
}

int remove_elemento_p (LISTA *L, int x){
		int i;
	if(lista_e_vazia(L)==0){
		return 0;	
	}
	else{
		//PROCURA ELEMENTO A SER REMOVIDO
		for(i=0;i<L->fim;i++){
			if(L->lista[i]==L->lista[x])//elemento foi encontrado!
			{
				while(i!=L->fim)
				{
					L->lista[i]=L->lista[i+1];
					i++;
				}
				L->fim--;
				return 1;
			}	
		}	
		return 0;
	}	
	
}





