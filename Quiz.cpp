		#include <iostream>
		#include <iomanip>
		#include "Questoes.h"


		int main() {

			setlocale(LC_ALL, "");
			using namespace std;
	
			start();
			switch (materias())
			{
				case 1:
					bool continuar;
				do
				{
					system("cls"); startMat(); continuar = funcAleatorizadoraMat();
				} while (continuar == 1); break;
				case 2: 
					do
					{
						system("cls"); startQuim(); continuar = funcAleatorizadoraQuim();
					} while (continuar == 1); break;
			case 3: std::cout << "Tem nada aqui também não, rapaz\n"; break;
			default:
				break;
			}
			return 0;
		}
