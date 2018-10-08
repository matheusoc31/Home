#include <iostream>

using namespace std;

Grafo::Grafo(){
	
	primeiro = NULL;
	maior_grau = NULL;
	num_arestas = 0;
	num_nos = 0;
	
}

bool Grafo::procuraNo(int id){
	
	if(ehNulo())
		return false;
	
	No * p = primeiro;
			
	while(p->getProximo() != NULL ){
		if(p->getId() == id)
			return true;
		p= p->getProximo();
	}
	return false;
}

void Grafo::inserirNo(int id, int penalidade){
	
	if(procuraNo(id)){
		cout<<"Erro No já existe!!!"<<endl;
		return;
	}

	No * p = primeiro;
	
	if(p == NULL)
		primeiro = new No(id, penalidade);
	else{
		while(p->getProximo() != NULL){
			p= p->getProximo();
		}
		No * t = new No(id, penalidade);
		p->setProximo(t);
	}
	num_nos++;
}

void Grafo::deletarNo(int id){

	if(primeiro == NULL){
		cout<<"Erro Grafo vazio!!!"<<endl;
		return;
	}
	
	No * p = primeiro;
	No * t = NULL;
	
	while(p->getId() != id){
		t = p;
		p = p->getProximo();
	}
	
	t->setProximo(p->getProximo());
	delete p;
	num_nos--;
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



