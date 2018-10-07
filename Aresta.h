#ifndef ARESTA_H
#define ARESTA_H

#include "No.h"

class No;

class Aresta{
	
	public:
		Aresta(int peso, No *a){peso_aresta = peso, no_a = a;}
		~Aresta(){};
		
		int getPeso_Aresta(){ return peso_aresta;}
		No *getA(){ return no_a;}
		void setPeso_Aresta(int peso){ peso_aresta = peso;}
		void setA(No *a){ no_a = a;}
		
	private:
		int peso_aresta;
		No * no_a;
	
};
#endif
