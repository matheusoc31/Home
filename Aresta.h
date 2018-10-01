#ifndef ARESTA_H
#define ARESTA_H

#include "No.h"

class Aresta{
	
	public:
		Aresta(){};
		Aresta(int peso, No *a, No *b){peso_aresta = peso, no_a = a, no_b = b;}
		~Aresta(){};
		
		int getPeso_Aresta(){ return peso_aresta;}
		No *getA(){ return _a;}
		No *getB(){ return _b;}
		void setPeso_Aresta(int peso){ peso_aresta = peso;}
		void setA(No *a){ no_a = a;}
		void setB(No *b){ no_b = b;}
		
	private:
		int peso_aresta;
		No * no_a;
		No * no_b;
	
};
#endif
