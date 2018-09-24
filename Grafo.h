#include "No.h"

class Grafo {
	
	public:
		Grafo(){};
		~Grafo(){};
		
		bool ehNulo() { return false; } // arrumar
		int getNum_arestas(){ return 0;}; // arrumar
		int getMaior_grau(){ return maior_grau->getGrau();}
		
		
	private: 
		int num_arestas;
		No * maior_grau;
};
