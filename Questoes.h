#pragma once
#include <iostream>
#include <random>
using namespace std;



void start() {
	std::cout << "===========================\n\n";
	std::cout << "    QUIZ MUITO LEGAL\n\n";
	std::cout << "===========================\n\n";
}

//Quest�es de Matem�tica
int matQ1() {
	int resp;
	cout << "Quais s�o as ra�zes da fun��o: x� + 2x + 4? \n\n";
	cout << "1. x1 = 5 / x2 = 3\n";
	cout << "2. x1 = 2/ x2 = 4\n";
	cout << "3. x1 = -2 / x2 = -4\n";
	cout << "4. x1 = 2 / x2 = -4\n";
	cout << "\nSua resposta: ";
	cin >> resp;
	switch (resp)
	{
	case 1: cout << "\nResposta errada!\n"; break;
	case 2: cout << "\nResposta errada!\n"; break;
	case 3: cout << "\nResposta errada!\n"; break;
	case 4: cout << "\nResposta certa!\n"; break;
	default: cout << "\nDigite uma resposta v�lida!\n";
		break;
	}
	return resp;
}

int matQ2() {
	int resp;
	cout << "Dirigir ap�s ingerir bebidas alco�licas � uma atitude extremamente perigosa, uma vez que, a partir da primeira dose, a pessoa j� come�a a ter perda de sensibilidade de movimentos e de reflexos. Apesar de a elimina��o e absor��o do �lcool depender de cada pessoa e de como o organismo consegue metabolizar a subst�ncia, ao final da primeira hora ap�s a ingest�o, a concentra��o de �lcool (C) no sangue corresponde a aproximadamente 90% da quantidade (q) de �lcool ingerida, e a elimina��o total dessa concentra��o pode demorar at� 12 horas.\n";

	cout << "Nessas condi��es, ao final da primeira hora ap�s a ingest�o da quantidade q de �lcool, a concentra��o C dessa subst�ncia no sangue � expressa algebricamente por\n\n";

	cout << "1. C = 0,9q\n";
	cout << "2. C = 0,1q\n";
	cout << "3. C = 1 - 0,1q\n";
	cout << "4. C = 1 - o,9q\n";
	cout << "\nSua resposta: ";
	cin >> resp;
	switch (resp)
	{
	case 1: cout << "\nResposta Certa!\n"; break;
	case 2: cout << "\nResposta errada!\n"; break;
	case 3: cout << "\nResposta errada!\n"; break;
	case 4: cout << "\nResposta errada!\n"; break;
	default: cout << "\nDigite uma resposta v�lida!\n";
		break;
	}
	return resp;
}
int matQ3() {
	int resp;
	cout << "Quantos n�meros de 3 algarismos distintos podemos formar usando os d�gitos 1, 2, 3, 4 e 5?\n\n";
	cout << "1. 24\n";
	cout << "2. 6\n";
	cout << "3. 120\n";
	cout << "4. 50\n";
	cout << "\nSua resposta: ";
	cin >> resp;
	switch (resp)
	{
	case 1: cout << "\nResposta errada!\n"; break;
	case 2: cout << "\nResposta certa!\n"; break;
	case 3: cout << "\nResposta errada!\n"; break;
	case 4: cout << "\nResposta errada!\n"; break;
	default: cout << "\nDigite uma resposta v�lida!\n";
		break;
	}
	return resp;
}

int matQ4() {
	int resp;
	cout << "Quantas senhas de 4 d�gitos podem ser formadas usando os algarismos de 0 a 9, sem repetir d�gitos?\n";
	cout << "1. 125\n";
	cout << "2. 1000\n";
	cout << "3. 5040\n";
	cout << "4. 7200\n";
	cout << "\nSua resposta: ";
	cin >> resp;
	switch (resp)
	{
	case 1: cout << "\nResposta errada!\n"; break;
	case 2: cout << "\nResposta errada!\n"; break;
	case 3: cout << "\nResposta certa!\n"; break;
	case 4: cout << "\nResposta errada!\n"; break;
	default: cout << "\nDigite uma resposta v�lida!\n";
		break;
	}
	return resp;
	
}


void funcFodase (){
	cout << "Foi aleatorizado KKKKKKKKKKKKKKKKK";

}

void funcAleatorizadora() {
	std::random_device rd;
	std::mt19937 gen(rd());

	std::uniform_int_distribution<> distrib(1, 6); //vai de 1 a 6

	// Gerador de RNG
	int randomNumber = distrib(gen);
	if (randomNumber == 1)
	{
		matQ1(); //funcao da 1� questao
	}
	else if (randomNumber == 2)
	{
		matQ2();
	}
	else if (randomNumber == 3) {
		matQ3();
	}

	else
	{
		funcFodase(); //teste foda
	}
}