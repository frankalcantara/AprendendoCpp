/*
* O resultado de uma condição, com operadores lógicos ou não será sempre 
* ou zero (falso) ou um (verdadeiro) o que permite usos interessantes para estes operadores
*
*	Faça um programa que indique se um determinado carctere, não acentuado, é uma vogal ou não
*/

//biblioca contendo as definições dos objetos padrões 
//de entrada e saída
#include <iostream>
#include <locale> //imprimir em pt-br no windows

int main()
{
	setlocale(LC_ALL, "portuguese");//para imprimir em pt-br no windows
	char c = ' '; //sempre inicialize suas variáveis

	int vogalMinuscula = 0, vogalMaiuscula = 0;

	std::cout << "Digite um caractere: ";
	std::cin >> c;

	// será um se for vogal e letra minúscula
	vogalMinuscula = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

	// será um se for uma vogal maiúscula
	vogalMaiuscula = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	// evaluates to 1 (true) if either isLowercaseVowel or isUppercaseVowel is true
	if (vogalMinuscula || vogalMaiuscula)
		std::cout << c << " é uma vogal." << std::endl;  
	else
		std::cout << c << " não é uma vogal." << std::endl;

	//em windows, enquanto estiver aprendendo pode substituir as
	//três linhas a seguir por system("Pause"); 
	//mas vamos tentar não usar system já que é exclusivo do windows. 
	std::cout << "Pressione Enter para continuar...";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();

	return 0;
}