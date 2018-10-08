#include <iostream>
#include "No.h"


using namespace std;

void No::insereAresta(int peso, No *a){
	
	if(primeira == NULL)
		primeira = new Aresta(peso, a);
	else{
		Aresta *t = primeira;
		Aresta *ar = new Aresta(peso, a);
		
		while(t->getProxima() != NULL){
			t = t->getProxima();
		}
		
		t->setProxima(ar);
		grau++;
	}		
}

void No::deletaAresta(No *a, Aresta *ax){ 
	///Recebe o No e a Aresta deste no a ser excluida
	///Procura na lista de arestas deste No a aresta em que a proxima
	///desta eh a aresta que sera excluida, linka a aresta atual com a
	///proxima da aresta que sera excluida, e deleta a aresta
	if(primeira == NULL){
		cout << "Erro! Este No nao possui arestas!" << endl;
		return;
	}
	
	Aresta *ar = primeira;
	
	while(ar->getProxima() != ax){
		ar = ar->getProxima();
	}	
	
	Aresta *aux = ar->getProxima();
	ar->setProxima(aux->getProxima());
	delete aux;
	grau--;

}

