#include "No.h"

class Grafo {
	
	public:
		Grafo(){};
		~Grafo(){};
		
		bool ehNulo() { return false; } // arrumar
		int getNum_arestas(){ return 0;}; // arrumar
		int getMaior_grau(){ return maior_grau->getGrau();}
		
		void setNum_no(int num){ num_no = num;}
		int getNum_no(){ return num_no;}
		
		
	private: 
		int num_no;
		int num_arestas;
		No * maior_grau;
};
