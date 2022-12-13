#include <stdio.h>
#include "questao2.h"

int main(int argc, char *argv[]) {
	LISTA L1;
	int resp,n;
	while(resp>=0)
  	{
		printf("\n \t Vc deseja: \t \n");
	    printf("1)  Inicializar a lista. \n");
	    printf("2)  Verificar se lista eh vazia. \n");
	    printf("3)  Verificar se lista eh cheia. \n");
	    printf("4)  Inserir elemento. \n");
	    printf("5)  Remover elemento. \n");
	    printf("6)  Imprimir a lista. \n");
	    printf("7)  Mostrar maior elemento. \n");
	    printf("8)  Imprimir a media. \n");
	    printf("9) Sair \n\n");
	    printf("\nDigite a opcao desejada: ");
	    scanf("%d",&resp);
	    switch(resp)
	    {
	      case 1: 
	      {
	        inicializar_lista(&L1);
	        printf("\n Lista inicializada!\n");
	        break;
	      }
	      case 2:
	      {
	        if(lista_e_vazia(&L1))
	          printf("\n A lista eh vazia!\n");
	        else
	          printf("\n A lista nao eh vazia.\n");
	        break;
	      }
	      case 3:
	      {
	        if(lista_e_cheia(&L1))
	          printf("\n A lista eh cheia!\n");
	        else
	          printf("\n A lista nao eh cheia.\n");
	        break;
	      }
	      case 4: 
	      {
	        printf("\n Digite o numero que voce deseja inserir na lista: ");
	        scanf("%d",&n);
	        if (insere_elemento(&L1 , n))
	          printf("\n Elemento inserido com sucesso!\n");
	        else
	          printf("\n Nao foi possivel inserir o elemento.\n");
	        break;
	      }
	      case 5: 
	      {
	        printf("\n Digite o numero que voce deseja remover da lista: "),
	        scanf("%d",&n);
	        if (remove_elemento(&L1 , n))
	          printf("\n Elemento removido com sucesso!\n");
	        else
	          printf("\n Nao foi possivel remover o elemento.\n");
	        break;
	      }
	      case 6: 
	      {
	        imprime(&L1);
	        break;
	      }
	      case 7: 
	      {
	      	printf("O maior elemento e: %d", maior(&L1));
	      	break;
		  }
		  case 8: 
		  {
		  	printf("A media e: %d", media(&L1));
		  	break;
		  }
	      case 9: 
	      {
	        printf("\n \t TCHAU! \n \n ");
	       	return 1;
	        break;
	      }
	      default: printf("\n Opcao inexistente\n");
	    } 
	}
}
  
