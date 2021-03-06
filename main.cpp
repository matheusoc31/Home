#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string.h>
#include <string>
#include <math.h>
#include "Grafo.h"

using namespace std;


Grafo * carregarArquivo(char * nome_arquivo){ //resolvido!!!

	fstream arquivo(nome_arquivo);
	
	string tamanho;
	Grafo * b;
	
	if(arquivo.is_open()){
		getline(arquivo,tamanho);
		b = new Grafo ();
		
		while(!arquivo.eof()){
			getline(arquivo,tamanho);
			cout<<tamanho<<endl;
		}
		cin>>tamanho;
		arquivo.close();
		
		//verifica se foram lidos a quantidade de nó passada pelo arquivo
		if(b->getNum_nos() == atoi(tamanho.c_str()))
			return b;
		else{
			cout<<"Erro ao ler arquivo"<<endl;
			system("pause");
			exit(1);
		}
	}
	else{
		string sair;
		cout<<"ERRO, AQUIVO NÃO ENCONTRADO!"<<endl;
		cin>>sair;
		exit(1);
	}

}

void salvarGrafoArquivo(char * nome_arquivo){
	
	return;
	
}

char menu(){
	
	char num_escolhido = -1;
	
	system("tput reset"); //ou clear

	cout<<"TRABALHO DE GRAFOS"<<endl;
	cout<<"TEMA STEINER COM COLETA DE PRÊMIOS"<<endl;
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
	cout<<" 7- Deletar grafo"<<endl; // deleta o grafo e cria um novo de tamanho 0;
	cout<<" 8- Salvar grafo"<<endl; //salva no arquivo de saida (caso não tenha arquivo de saida salvar em arquivo padrão)   
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

void voltar(){
	
	cout<<endl<<"Pressione 9 para voltar ao menu ..."<<endl;
				
	char voltar;
	voltar = '0';
				
	while(voltar != '9'){
		cin>> voltar;
	}
}

int main(int arg, char **argv)
{
	
	bool fim = 0;
	Grafo * a;
	
	if(arg > 1)
		a = carregarArquivo(argv[1]);
	else
		a = new Grafo();
	
	string no = "0";
	string penalidade = "0";
	bool teste;
	string arquivo;
	
	while(!fim){
		switch(menu()){
			
			case '1': /// Adicionar No
				
				cout<<"Digite o no que deseja inserir: ";
				cin>> no;
				
				if(stoi(no) != 0){
									
					teste = a->procuraNo(stoi(no));
				
					if(teste){
						cout<<"Erro, no já inserido!"<<endl;			
					}
					else{
						cout<<"Digite a penalidade do no: ";
						cin>>penalidade;
					
						while(stoi(penalidade)<0){
							cout<<"Erro, penalidade inválida!"<<endl;
							cout<<"Digite a penalidade do no: ";
							cin>>penalidade;
						}
						if(stoi(penalidade)>=0)
							a->inserirNo(stoi(no), stoi(penalidade));
					}	
				}
				else
					cout<<"Erro, valor inválido!"<<endl;
					
				break;
			
			case '2': /// Remover No
				
				no = "0";
				
				cout<<"Digite o no que deseja deletar: ";
				cin>> no;
					
				teste = a->procuraNo(stoi(no));
					
				if(!teste){
					cout<<"Erro, no não encontrado!"<<endl;
					system("pause");
				}
				else
					a->deletarNo(stoi(no));
				
				break;
			
			case '3': /// Adicionar Aresta
			 
				break;
			
			case '4': /// Remover Aresta
			
				break;
			
			case '5': /// Calcula Problema de Steiner com coleta de prêmios
			
				voltar();
			
				break;
			
			case '6': /// Info
				
				system("tput reset"); // ou clear
				
				cout<<"O Grafo é nulo: "<< a->ehNulo() <<endl;
				cout<<"Numero de nós: "<< a->getNum_nos()<<endl;
				cout<<"Seu grau é: "<< a->getMaior_grau() <<endl;// implementar
				cout<<"Numero de arestas: "<< a->getNum_arestas() <<endl;//implementar
	
				voltar();
					
				break;
			
			case '7': /// Deletar Grafo
				
				system("tput reset"); //ou clear

				cout<<endl<<"Deseja mesmo deletar o Grafo? (Y/N) ";
				
				char deletar;
				
				while( deletar!='Y' && deletar != 'y' && deletar != 'n'&& deletar!='N')
					cin>> deletar;

				if(deletar == 'Y' || deletar == 'y'){
					 //chamar o destrutor
					cout<<endl<<"Grafo deletado!"<<endl;
				}
				else
					cout<<endl<<"Operação cancelada!"<<endl;
				
				voltar();
				
				break;
			
			case '8': /// Salvar Grafo
			
				system("tput reset"); //ou clear
				
				cout<<"Digite o nome do arquivo em que deseja salvar o grafo: ";
				cin>>arquivo;
				
				//salvarGrafoArquivo(arquivo); implementar função

				cout<<endl<<"Grafo salvo no arquivo "<<arquivo<<".txt"<<endl;
			
				voltar();
				
				break;
			
			case '0': fim = 1;
		}	
	}
	
	return 0;
}
 
