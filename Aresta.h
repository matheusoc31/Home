#ifndef ARESTA_H
#define ARESTA_H

#include "No.h"

class No;
/* CONTROLE DE MUDANÇAS
 * 
 * criação de variável:
 * Aresta *proxima;
 * 
 * implementação de funções:
 * Aresta *getProxima(){ return proxima;}
 * void setProxima(Aresta *ar){ proxima = ar;}
 * 
 * */
class Aresta{
	
	public:
		Aresta(int peso, No *a){peso_aresta = peso, no_a = a;}
		~Aresta(){};
		
		int getPeso_Aresta(){ return peso_aresta;}
		No *getA(){ return no_a;}
		void setPeso_Aresta(int peso){ peso_aresta = peso;}
		void setA(No *a){ no_a = a;}
		Aresta *getProxima(){ return proxima;}
		void setProxima(Aresta *ar){ proxima = ar;}
		
	private:
		int peso_aresta;
		No * no_a;
		Aresta *proxima;
	
};
#endif
