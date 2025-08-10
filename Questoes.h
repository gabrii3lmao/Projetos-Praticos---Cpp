#pragma once
#include <iostream>
#include <random>

//cabeçalhos

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
void startQuim() {
	std::cout << "=============================\n\n";
	std::cout << "   PERGUNTAS DE QUIMICA\n\n";
	std::cout << "=============================\n\n";
}
// Seletor de matéria 
int materias() {
	int resposta;
	std::cout << "Qual matéria você quer selecionar?\n\n";
	std::cout << "1. Matemática\n";
	std::cout << "2. Quimica\n";
	std::cout << "3. Programação\n";
	std::cout << "\nSua resposta: ";
	std::cin >> resposta;
	
	return resposta;
}

//Questões de Matemática

 int matQ1() {
	int resp;
	std::cout << "Quais são as raízes da função: x² + 2x + 4? \n\n";
	std::cout << "1. x1 = 5 / x2 = 3\n";
	std::cout << "2. x1 = 2/ x2 = 4\n";
	std::cout << "3. x1 = -2 / x2 = -4\n";
	std::cout << "4. x1 = 2 / x2 = -4\n";
	std::cout << "\n\nSua resposta: ";
	std::cin >> resp;
	switch (resp)
	{
	case 1: std::cout << "\nResposta errada!\n"; break;
	case 2: std::cout << "\nResposta errada!\n"; break;
	case 3: std::cout << "\nResposta errada!\n"; break;
	case 4: std::cout << "\nResposta certa!\n"; break;
	default: std::cout << "\n\nDigite uma resposta válida!\n";
		break;
	}
	return resp;
}

int matQ2() {
	int resp;
	std::cout << "Qual é a área de um triângulo com base de 10 cm e altura de 8 cm?\n\n";
	std::cout << "1. 40 cm²\n";
	std::cout << "2. 80 cm²\n";
	std::cout << "3. 100 cm²\n";
	std::cout << "4. 160 cm²\n";
	std::cout << "\n\nSua resposta: ";
	std::cin >> resp;
	switch (resp)
	{
	case 1: std::cout << "\nResposta Certa!\n"; break;
	case 2: std::cout << "\nResposta errada!\n"; break;
	case 3: std::cout << "\nResposta errada!\n"; break;
	case 4: std::cout << "\nResposta errada!\n"; break;
	default: std::cout << "\n\nDigite uma resposta válida!\n";
		break;
	}
	return resp;
}

int matQ3() {
	int resp;
	std::cout << "Quantos números de 3 algarismos distintos podemos formar usando os dígitos 1, 2, 3, 4 e 5\n\n";
	std::cout << "1. 24\n";
	std::cout << "2. 60\n";
	std::cout << "3. 120\n";
	std::cout << "4. 50\n";
	std::cout << "\n\nSua resposta: ";
	std::cin >> resp;
	switch (resp)
	{
	case 1: std::cout << "\nResposta errada!\n"; break;
	case 2: std::cout << "\nResposta certa!\n"; break;
	case 3: std::cout << "\nResposta errada!\n"; break;
	case 4: std::cout << "\nResposta errada!\n"; break;
	default: std::cout << "\n\nDigite uma resposta válida!\n";
		break;
	}
	return resp;
}

int matQ4() {
	int resp;
	std::cout << "Quantas senhas de 4 dígitos podem ser formadas usando os algarismos de 0 a 9, sem repetir dígitos?\n";
	std::cout << "1. 125\n";
	std::cout << "2. 1000\n";
	std::cout << "3. 5040\n";
	std::cout << "4. 7200\n";
	std::cout << "\n\nSua resposta: ";
	std::cin >> resp;
	switch (resp)
	{
	case 1: std::cout << "\nResposta errada!\n"; break;
	case 2: std::cout << "\nResposta errada!\n"; break;
	case 3: std::cout << "\nResposta certa!\n"; break;
	case 4: std::cout << "\nResposta errada!\n"; break;
	default: std::cout << "\n\nDigite uma resposta válida!\n";
		break;
	}
	return resp;
}

int matQ5() {
	int resp;
	std::cout << "Qual é a média dos seguintes números: 5, 10, 15, 20, 25?\n";
	std::cout << "1. 15\n";
	std::cout << "2. 12\n";
	std::cout << "3. 20\n";
	std::cout << "4. 10\n";
	std::cout << "\n\nSua resposta: ";
	std::cin >> resp;
	switch (resp)
	{
	case 1: std::cout << "\nResposta certa!\n"; break;
	case 2: std::cout << "\nResposta errada!\n"; break;
	case 3: std::cout << "\nResposta errada!\n"; break;
	case 4: std::cout << "\nResposta errada!\n"; break;
	default: std::cout << "\n\nDigite uma resposta válida!\n";
		break;
	}
	return resp;
}

int matQ6() {
	int resp;
	std::cout << "Em uma loja, um produto que custava R$ 200,00 teve um desconto de 15%. Qual o valor final do produto?\n";
	std::cout << "1. R$ 200.00\n";
	std::cout << "2. R$ 150.00\n";
	std::cout << "3. R$ 175.00\n";
	std::cout << "4. R$ 155.00\n";
	std::cout << "\n\nSua resposta: ";
	std::cin >> resp;
	switch (resp)
	{
	case 1: std::cout << "\nResposta errada!\n"; break;
	case 2: std::cout << "\nResposta errada!\n"; break;
	case 3: std::cout << "\nResposta certa!\n"; break;
	case 4: std::cout << "\nResposta errada!\n"; break;
	default: std::cout << "\n\nDigite uma resposta válida!\n";
		break;
	}
	return resp;
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
	case 5: matQ5(); break;
	case 6: matQ6(); break;
	default: break;
	}
	bool opcao;
	std::cout << "\nVocê deseja sair?\n";
	std::cout << "0. Sair\n";
	std::cout << "1. Continuar\n";
	std::cout << "\n\nSua resposta: ";
	std::cin >> opcao;
	return (opcao);
}


//questões de quimica

int quimQ1() {
	int resposta;
	std::cout << "Qual das alternativas apresenta um elemento químico do grupo dos metais alcalinos?\n\n";
	std::cout << "1. Hélio (He)\n";
	std::cout << "2. Oxigênio(O)\n";
	std::cout << "3. Potássio(K)\n";
	std::cout << "4. Enxofre(S)\n";
	std::cout << "\nSua resposta: ";
	std::cin >> resposta;
	switch (resposta)
	{
	case 1: std::cout << "\nResposta errada!\n"; break;
	case 2: std::cout << "\nResposta errada!\n"; break;
	case 3: std::cout << "\nResposta certa!\n"; break;
	case 4: std::cout << "\nResposta errada!\n"; break;
	default: std::cout << "Digite um valor válido!\n"; break;
	}
		return resposta;
}

int quimQ2() {
	int resposta;
	std::cout << "A passagem do estado sólido diretamente para o gasoso é chamada de: \n\n";
	std::cout << "1. Fusão\n";
	std::cout << "2. Vaporização\n";
	std::cout << "3. Sublimação\n";
	std::cout << "4. Condensação\n";
	std::cout << "\nSua resposta: ";
	std::cin >> resposta;
	switch (resposta)
	{
	case 1: std::cout << "\nResposta errada!\n"; break;
	case 2: std::cout << "\nResposta errada!\n"; break;
	case 3: std::cout << "\nResposta certa!\n"; break;
	case 4: std::cout << "\nResposta errada!\n"; break;
	default: std::cout << "Digite um valor válido!\n"; break;
	}
		return resposta;
}

int quimQ3() {
	int resposta;
	std::cout << "Uma reação exotérmica é aquela que: \n\n";
	std::cout << "1. Absorve calor\n";
	std::cout << "2. Libera calor\n";
	std::cout << "3. Não troca calor com o ambiente\n";
	std::cout << "4. Só ocorre a altas temperaturas\n";
	std::cout << "\nSua resposta: ";
	std::cin >> resposta;
	switch (resposta)
	{
	case 1: std::cout << "\nResposta errada!\n"; break;
	case 2: std::cout << "\nResposta certa!\n"; break;
	case 3: std::cout << "\nResposta errada!\n"; break;
	case 4: std::cout << "\nResposta errada!\n"; break;
	default: std::cout << "Digite um valor válido!\n"; break;
	}
		return resposta;
}

bool funcAleatorizadoraQuim() {
	std::random_device rd;
	std::mt19937 gen(rd());

	std::uniform_int_distribution<> distrib(1,6); //vai de 1 a 6

	// Gerador de RNG Mat
	int randomNumber = distrib(gen);
	switch (randomNumber)
	{
	case 1: quimQ1(); break;
	case 2: quimQ2(); break;
	case 3: quimQ3(); break;
	case 4: quimQ2(); break;
	case 5: quimQ1(); break;
	case 6: quimQ3(); break;
	default:
		break;
	}
	int opcao;
	std::cout << "\nVocê deseja sair?\n";
	std::cout << "0. Sair\n";
	std::cout << "1. Continuar\n";
	std::cout << "\n\nSua resposta: ";
	std::cin >> opcao;

	return (opcao);
}
