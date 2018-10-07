#ifndef NO_H
#define NO_H
#include "Aresta.h"
#include <iostream>

class No {

	public:
		No(int identificador, int peso){ id = identificador, peso_no = peso, proximo = NULL;} 
		~No(){};
		
		int getGrau(){ return grau;}
		int getId(){ return id;}
		int getPeso_No(){ return peso_no;}
		
		No *getProximo(){ return proximo;}
		void setProximo(No *prox){ proximo = prox;}
		
		
	private:
		int id;
		int peso_no;
		int grau;
		No *proximo;
		Aresta *listaresta;
		
};
#endif
