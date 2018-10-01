#include <iostream>
#include "Grafo.h"

Grafo::Grafo(int tam){
	
	primeiro = NULL;
	maior_grau = NULL;
	num_nos = tam;
	num_aresta = 0;
	
}

bool Grafo::procuraNo(int id){
	
	No * p = primeiro;
	
	if(ehNulo())
		return false;
			
	while(p->getProx != Null ){
		if(p->getId() == id)
			return true;
		p= p->getProx();
	}
	return false;
}

void Grafo::inserirNo(int id, int peso){
	
	if(procuraNo(id)){
		cout<<"Erro No já existe!!!"<<endl;
		break;
	}
	
	No * p = primeiro;

	if(p == NULL)
		primeiro = new No(id, peso);
	else{
		No * p = primeiro;
		while(p->getProx() != NULL){
			p= p->getProx();
		}
		No * t = new No(id, peso);
		p->setProx(t);
	}
	num_no++;
}

void Grafo::deletarNo(int id){

	if(primeiro == NULL){
		cout<<"Erro Grafo vazio!!!"<<endl;
		break;
	}
	
	No *p = primeiro;
	
	while(p->getId() != id){
		p = p->getProx();
	}
	
	delete p;
	num_no--;
}

void Grafo::inserirAresta(int no_a, int no_b, int peso){
	//lembrar de mexer com o grau
}

void Grafo::deletarAresta(int no_a, int no_b){
	//lembrar de mexer com o grau
}

bool Grafo::ehNulo(){
	
	if(primeiro == NULL)
		return true;
	else 
		return false;
}



