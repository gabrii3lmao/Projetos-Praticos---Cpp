#include <iostream>
#include <iomanip>
#include <random>
#include "Questoes.h"


int main() {

	setlocale(LC_ALL, "");
	using namespace std;
	
	start();

	switch (materias())
	{
		case 1:  
		do
		{
			system("cls");  funcAleatorizadoraMat();
		} while (true); break;
	case 2: std::cout << "Tem nada aqui não rapaz\n"; break;
	case 3: std::cout << "Tem nada aqui também não, rapaz\n"; break;
	default:
		break;
	}
	
	return 0;
}
