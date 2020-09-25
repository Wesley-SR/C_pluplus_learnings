# include "Ponto.h"
# include <iostream>
using namespace std;

// Sobrecarga de construtores
// Permite declara��o de um mesmoobjeto de diferentes formas

// Destrutores
// N�o pode ter valor de retorno
// N�o podem ser chamados
// N�o podem ser sobrecarregados

Ponto::Ponto(){
	x = 10;
	y = 0;
}
Ponto::Ponto(int i){
	x = i;
}

Ponto::~Ponto(){
	cout << "Objeto destruido! \n";
}

int Ponto::Lerx(){
	return x;
};
void Ponto::Fixarx(int i){
	x = i;
};
