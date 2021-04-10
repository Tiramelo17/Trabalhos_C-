#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Pessoa {
  public : 
   string nome;
   string cor;
   string sexo; 
   int idade;
   
   Pessoa(int idade,string cor, string sexo, string nome){
   	this -> idade = idade; 
   	this -> cor = cor;
   	this -> sexo = sexo;
   	this -> nome = nome;
   }
 
  
};

int main()
{
  
  vector <Pessoa> pessoas;
  int idade;
  string nome,sexo,cor;
  while(1){
    cout << "Idade: ";
	cin >> idade;
    cout << "Cor do cabelo: ";
  	cin >> cor;
    cout << "Sexo F para feminino e M para masculino: ";
  	cin >> sexo;
    cout << "Nome (digite fim para finalizar): ";
    cin >> nome;
  	if(nome == "fim"){break;}      
    Pessoa user = Pessoa(idade,cor,sexo,nome);
    pessoas.push_back(user);
  }
  int a=0,b=0;
  int max = -1;
  string novoNome= "";
    for(auto it=begin(pessoas);it != end(pessoas);it++){
		if(it->nome == "Tieta" && it->idade<30 && it -> cor == "ruiva"){
			a++;
		}  
		
		if(it -> sexo == "M" && it -> idade > max){
			max = it -> idade;
			novoNome = it -> nome;
		} 	
		
				
	}
	
	cout << "O numero de mulheres ruivas com menos de 30 anos e que se chama tieta: " << a;
	cout << "\nO nome do homem com a maior idade: " << novoNome << endl;
  
 return 0;
}