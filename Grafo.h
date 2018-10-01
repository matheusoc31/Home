#include "No.h"
//#include "Aresta.h"

class Grafo {
	
	public:
		Grafo(){};
		Grafo(int tam);
		~Grafo(){};
		
		void inserirNo(int id);
		void deletarNo(int id);
		void inserirAresta(int no_a, int no_b, int peso);
		void deletarAresta(int no_a, int no_b);
		
		bool procuraNo();
		bool ehNulo();
		int getNum_arestas(){ return 0;} //arrumar 
		int getMaior_grau(){ return maior_grau->getGrau();}
		
		void setNum_no(int num){ num_no = num;}
		int getNum_no(){ return num_no;}
		
		
	private:
		No* primeiro;
		No * maior_grau;
		int num_no;
		int num_arestas;
};
