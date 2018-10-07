#include "No.h"

class Grafo {
	
	public:
		Grafo();
		~Grafo(){};
		
		void inserirNo(int id, int penalidad1);
		void deletarNo(int id);
		void inserirAresta(int no_a, int no_b, int peso);
		void deletarAresta(int no_a, int no_b);
		int getMaior_grau(){ return maior_grau->getGrau();}
		void setNum_nos(int num){ num_nos = num;}
		int getNum_nos(){ return num_nos;}
		int getNum_arestas(){ return num_arestas;} 
		bool procuraNo(int id);
		bool ehNulo();
		
	private:
		No* primeiro;
		No * maior_grau;
		int num_nos;
		int num_arestas;
};

#include "Grafo.cpp"
