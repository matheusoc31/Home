#include <iostream>
//#include "grafo.h"

using namespace std;

int menu(){
	
	int num_escolhido = -1;
	
	cout<<endl;
	cout<<" 1- Adicionar nó"<<endl;
	cout<<" 2- Remover nó"<<endl;
	cout<<" 3- Adicionar aresta"<<endl;
	cout<<" 4- Remover aresta"<<endl; 
	cout<<" 5- Calcular resultado do problema escolhido"<<endl; //calcula o resultado do problema que escolhemos
	cout<<" 6- Info"<<endl; // mostra informações sobre o grafo (quantidade de arestas e no, se é nulo ou não)  
	cout<<" 7- Salvar grafo"<<endl; //salva no arquivo de saida
	cout<<" 0- Sair"<<endl;
	cout<<endl;
	cout<<"Digite a opção desejada: ";
	cin>>num_escolhido;
	
	while(num_escolhido<0 || num_escolhido>7){
		cout<<"ERRO !!!"<<endl;
		cout<<"Digite uma opção válida: ";
		cin>>num_escolhido;
	}
	
	return num_escolhido;
}

int main()
{
	bool fim = 0;
	//grafo a();
	
	cout<<"TRABALHO DE GRAFOS"<<endl;
	cout<<"TEMA ESCOLHIDO"<<endl;
	cout<<"UFJF - GRUPO 16"<<endl;
	
	while(!fim){
		switch(menu()){
			
			case 1:;
			
			case 2:;
			
			case 3:;
			
			case 4:;
			
			case 5:;
			
			case 6:;
			
			case 7:;
			
			case 8:;
			
			case 0: fim = 1;
		}	
	}
	
	return 0;
}


//figlet https://www.hackingblogs.com/linux-ascii-art/
//https://pplware.sapo.pt/truques-dicas/aprenda-novos-truques-para-limpar-o-terminal/
 
