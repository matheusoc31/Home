#ifndef NO_H
#define NO_H
#include "Aresta.h"
#include <iostream>

class Aresta;
/* CONTROLE DE MUDANÇAS
 * 
 * inicialização da variável grau no construtor da classe
 * 
 * criação de variável:
 * Aresta *primeira;
 * 
 * implementação das funções:
 * void insereAresta(int peso, No *a);
 * void deletaAresta(No *a, Aresta *ax); 
 * 
 * ambas funções estão crescendo e decrescendo o grau do no
 * */
class No {

	public:
		No(int identificador, int peso){ id = identificador, peso_no = peso, proximo = NULL,
										  grau = 0;} 
		~No(){};
		
		int getGrau(){ return grau;}
		int getId(){ return id;}
		int getPeso_No(){ return peso_no;}
		
		No *getProximo(){ return proximo;}
		void setProximo(No *prox){ proximo = prox;}
		void insereAresta(int peso, No *a);
		void deletaAresta(No *a, Aresta *ax); 
		
		
	private:
		int id;
		int peso_no;
		int grau;
		No *proximo;
		Aresta *primeira;
		
};
#endif
