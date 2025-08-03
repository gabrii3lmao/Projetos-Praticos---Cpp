#include <iostream>
#include <iomanip>
#include <random>
#include "Questoes.h"

//falta fazer a desgraça do menu onde o usuário vai escolher a matéria. 
//NÃO SE ESQUECER DE FAZER O LAÇO DE REPETIÇÃO INFINITO PRO MENU

int main() {
	setlocale(LC_ALL, "");
	using namespace std;

	start(); // cabeçalho 
	funcAleatorizadora(); // onde uma Questão aleatória vai ser chamada 
	return 0;
}
