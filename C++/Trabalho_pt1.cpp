#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
#include <math.h>
using namespace std;


float fatorial (int t){
float fat; 
for(fat = 1; t > 1; t = t - 1){

fat = fat * t;
}
return fat;
}


int main (){ 
int a;
float total,valFat,valPot;
cout << "Digite o numero de numero de termos gostaria de saber: ";
cin >> a;
while(a>=1){
	int b=a;
	int temp = 4+2*(b-1);
	float valFatorial = fatorial(temp);
	float valPotencia = pow(10,a-1);
	b = a%2;
	if(b!=0){
		valFat += valFatorial;
		valPot += valPotencia;
		total += valPotencia/valFatorial;
	}
	if(b==0){
		valFat -= valFatorial;
		valPot -= valPotencia;
		total -= valPotencia/valFatorial;
	}	
	a--;
}

	cout << "Em decimais: " << total << endl;
	
}