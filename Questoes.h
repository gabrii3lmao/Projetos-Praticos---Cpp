#pragma once
#include <iostream>
#include <random>
using namespace std;



void start() {
	std::cout << "===========================\n\n";
	std::cout << "    QUIZ MUITO LEGAL\n\n";
	std::cout << "===========================\n\n";
}

void startMat() {
	std::cout << "=============================\n\n";
	std::cout << "   PERGUNTAS DE MATEMÁTICA\n\n";
	std::cout << "=============================\n\n";
}

int materias() {
	int resposta;
	std::cout << "Qual matéria você quer selecionar?\n\n";
	std::cout << "1. Matemática\n";
	std::cout << "2. Quimica\n";
	std::cout << "3. Programação\n";
	std::cout << "Sua resposta: ";
	std::cin >> resposta;
	
	return resposta;
}

//Questões de Matemática
int matQ1() {
	int resp;
	cout << "Quais são as raízes da função: x² + 2x + 4? \n\n";
	cout << "1. x1 = 5 / x2 = 3\n";
	cout << "2. x1 = 2/ x2 = 4\n";
	cout << "3. x1 = -2 / x2 = -4\n";
	cout << "4. x1 = 2 / x2 = -4\n";
	cout << "\n\nSua resposta: ";
	cin >> resp;
	switch (resp)
	{
	case 1: cout << "\nResposta errada!\n"; break;
	case 2: cout << "\nResposta errada!\n"; break;
	case 3: cout << "\nResposta errada!\n"; break;
	case 4: cout << "\nResposta certa!\n"; break;
	default: cout << "\n\nDigite uma resposta válida!\n";
		break;
	}
	return resp;
}

int matQ2() {
	int resp;
	cout << "Dirigir após ingerir bebidas alcoólicas é uma atitude extremamente perigosa, uma vez que, a partir da primeira dose, a pessoa já começa a ter perda de sensibilidade de movimentos e de reflexos. Apesar de a eliminação e absorção do álcool depender de cada pessoa e de como o organismo consegue metabolizar a substância, ao final da primeira hora após a ingestão, a concentração de álcool (C) no sangue corresponde a aproximadamente 90% da quantidade (q) de álcool ingerida, e a eliminação total dessa concentração pode demorar até 12 horas.\n";

	cout << "Nessas condições, ao final da primeira hora após a ingestão da quantidade q de álcool, a concentração C dessa substância no sangue é expressa algebricamente por\n\n";

	cout << "1. C = 0,9q\n";
	cout << "2. C = 0,1q\n";
	cout << "3. C = 1 - 0,1q\n";
	cout << "4. C = 1 - o,9q\n";
	cout << "\n\nSua resposta: ";
	cin >> resp;
	switch (resp)
	{
	case 1: cout << "\nResposta Certa!\n"; break;
	case 2: cout << "\nResposta errada!\n"; break;
	case 3: cout << "\nResposta errada!\n"; break;
	case 4: cout << "\nResposta errada!\n"; break;
	default: cout << "\n\nDigite uma resposta válida!\n";
		break;
	}
	return resp;
}
int matQ3() {
	int resp;
	cout << "Quantos números de 3 algarismos distintos podemos formar usando os dígitos 1, 2, 3, 4 e 5?\n\n";
	cout << "1. 24\n";
	cout << "2. 60\n";
	cout << "3. 120\n";
	cout << "4. 50\n";
	cout << "\n\nSua resposta: ";
	cin >> resp;
	switch (resp)
	{
	case 1: cout << "\nResposta errada!\n"; break;
	case 2: cout << "\nResposta certa!\n"; break;
	case 3: cout << "\nResposta errada!\n"; break;
	case 4: cout << "\nResposta errada!\n"; break;
	default: cout << "\n\nDigite uma resposta válida!\n";
		break;
	}
	return resp;
}

int matQ4() {
	bool exit = false;
	int resp;
	cout << "Quantas senhas de 4 dígitos podem ser formadas usando os algarismos de 0 a 9, sem repetir dígitos?\n";
	cout << "1. 125\n";
	cout << "2. 1000\n";
	cout << "3. 5040\n";
	cout << "4. 7200\n";
	cout << "0. Sair";
	cout << "\n\nSua resposta: ";
	cin >> resp;
	switch (resp)
	{
	case 1: cout << "\nResposta errada!\n"; break;
	case 2: cout << "\nResposta errada!\n"; break;
	case 3: cout << "\nResposta certa!\n"; break;
	case 4: cout << "\nResposta errada!\n"; break;
	case 0: cout << "Saindo..."; exit = true; break;
	default: cout << "\n\nDigite uma resposta válida!\n";
		break;
	}
	return resp;
}


void funcFodase (){
	cout << "\nFoi aleatorizado KKKKKKKKKKKKKKKKK\n\n";

}

bool funcAleatorizadoraMat() {
	std::random_device rd;
	std::mt19937 gen(rd());

	std::uniform_int_distribution<> distrib(1, 6); //vai de 1 a 6

	// Gerador de RNG Mat
	int randomNumber = distrib(gen);
	switch (randomNumber)
	{
	case 1: matQ1(); break;
	case 2: matQ2(); break;
	case 3: matQ3(); break;
	case 4: matQ4(); break;
	default: funcFodase(); break;
	}
	int opcao;
	cout << "\nVocê deseja sair?\n";
	cout << "0. Sair\n";
	cout << "1. Continuar\n";
	cout << "\n\nSua resposta: ";
	cin >> opcao;
	return (opcao);
}

void funcAleatorizadoraQuim() {
	std::random_device rd;
	std::mt19937 gen(rd());

	std::uniform_int_distribution<> distrib(1, 6); //vai de 1 a 6

	// Gerador de RNG Mat
	int randomNumber = distrib(gen);



}
