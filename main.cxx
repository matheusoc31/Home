#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>
#include <math.h>
#include "Grafo.h"

using namespace std;


void carregarArquivo(char * nome_arquivo, Grafo * b){ //resolvido!!!

	fstream arquivo(nome_arquivo);
	
	string tamanho;
	
	if(arquivo.is_open()){
		getline(arquivo,tamanho);
		b->setNum_no(atoi(tamanho.c_str()));
		arquivo.close();
	}
	else{
		string sair;
		cout<<"ERRO, AQUIVO NÃO ENCONTRADO!"<<endl;
		cin>>sair;
		exit(1);
	}

}

void salvarGrafoArquivo(char * nome_arquivo){
	
	
}

char menu(){
	
	char num_escolhido = -1;
	
	system("tput reset"); //ou clear

	cout<<"TRABALHO DE GRAFOS"<<endl;
	cout<<"TEMA ESCOLHIDO"<<endl;
	cout<<"UFJF - GRUPO 16"<<endl;
	cout<<endl;
	cout<<"Menu: "<<endl;
	cout<<endl;
	cout<<" 1- Adicionar nó"<<endl;
	cout<<" 2- Remover nó"<<endl;
	cout<<" 3- Adicionar aresta"<<endl;
	cout<<" 4- Remover aresta"<<endl; 
	cout<<" 5- Calcular resultado do problema escolhido"<<endl; //calcula o resultado do problema que escolhemos
	cout<<" 6- Info"<<endl; // mostra informações sobre o grafo (grau, quantidade de arestas e no, se é nulo ou não)  
	cout<<" 7- Deletar grafo"<<endl;
	cout<<" 8- Salvar grafo"<<endl; //salva no arquivo de saida       
	cout<<" 0- Sair"<<endl;
	cout<<endl;
	cout<<"Digite a opção desejada: ";
	cin>>num_escolhido;
	
	while(num_escolhido<'0' || num_escolhido>'8'){
		cout<<"ERRO !!!"<<endl;
		cout<<"Digite uma opção válida: ";
		cin>>num_escolhido;
	}
	
	return num_escolhido;
}

int main(int arg, char **argv)
{
	
	bool fim = 0;
	Grafo a;
	
	carregarArquivo(argv[1],&a);
	
	while(!fim){
		switch(menu()){
			
			case '1': break;
			
			case '2': break;
			
			case '3': break;
			
			case '4': break;
			
			case '5': break;
			
			case '6': ///Info
				
				system("tput reset"); // ou clear
				
				cout<<"O Grafo é nulo: "<< a.ehNulo() <<endl;
				cout<<"Seu grau é: "<< a.getMaior_grau() <<endl;
				cout<<"Numero de nós: "<< a.getNum_no()<<endl;
				cout<<"Numero de arestas: "<< a.getNum_arestas() <<endl;
				
				cout<<endl<<"Pressione 9 para voltar ao menu ..."<<endl;
				
				char voltar;
				voltar = '0';
				
				while(voltar != '9'){
					cin>> voltar;
				}
					
				break;
			
			case '7': ///Deletar Grafo
				
				system("tput reset"); //ou clear

				cout<<endl<<"Deseja mesmo deletar o Grafo? (Y/N) ";
				
				char deletar;
				
				while( deletar!='Y' && deletar!='N')
					cin>> deletar;

				if(deletar == 'Y'){
					 //chamar o destrutor
					cout<<endl<<"Grafo deletado!"<<endl;
				}
				else
					cout<<endl<<"Operação cancelada!"<<endl;
				
				cout<<endl<<"Pressione 9 para voltar ao menu ..."<<endl;
				
				while(deletar != '9'){
					cin>> deletar;
				}
				
				break;
			
			case '8': 
			
				salvarGrafoArquivo(argv[2]);
				cout<<endl<<"Grafo salvo no arquivo "<<argv[2]<<endl;
			
				break;
			
			case '0': fim = 1;
		}	
	}
	
	return 0;
}


//figlet https://www.hackingblogs.com/linux-ascii-art/
//https://pplware.sapo.pt/truques-dicas/aprenda-novos-truques-para-limpar-o-terminal/
 
