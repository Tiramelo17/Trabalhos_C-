#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Aluno {
  public : 
   double nota; 
   int faltas,codigo;
   
   Aluno(double nota, int falta,int codigo){
   	this -> nota = nota; 
    this -> faltas = faltas; 
    this -> codigo = codigo;    
   }
 
  
};

int main()
{
  
  vector <Aluno> alunos;
   double nota; 
   int faltas,codigo;
   int numAprovadosMediaAlta=0,numTotal=0,numAlunosReprovados=0;
  while(1){
    cout << "Nota: ";
	cin >> nota;
    cout << "Faltas: ";
  	cin >> faltas;
    cout << "Código do aluno: (99 para sair) ";
  	cin >> codigo;
    numTotal++;
  	if(codigo != 99){      
    Aluno user = Aluno(nota,faltas,codigo);
    alunos.push_back(user);
      }
      else break;
  }
 
    for(auto it=begin(alunos);it != end(alunos);it++){

        if(it->nota > 80){
			numAprovadosMediaAlta++;    
		}  
		
		if(it -> nota < 60 || it -> faltas > 16){
			numAlunosReprovados++;
		} 	
		
				
	}

	int result = (numAprovadosMediaAlta*100)/numTotal;
	cout << "Porcentagem de alunos aprovados acima de 80 pontos: " << result << "%";
	cout << "\nnumero de alunos reprovado:  " << numAlunosReprovados << endl;
  
 return 0;
}