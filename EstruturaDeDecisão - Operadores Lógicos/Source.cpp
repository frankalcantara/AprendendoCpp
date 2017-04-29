/*
* O resultado de uma condi��o, com operadores l�gicos ou n�o ser� sempre 
* ou zero (falso) ou um (verdadeiro) o que permite usos interessantes para estes operadores
*
*	Fa�a um programa que indique se um determinado carctere, n�o acentuado, � uma vogal ou n�o
*/

//biblioca contendo as defini��es dos objetos padr�es 
//de entrada e sa�da
#include <iostream>
#include <locale> //imprimir em pt-br no windows

int main()
{
	setlocale(LC_ALL, "portuguese");//para imprimir em pt-br no windows
	char c = ' '; //sempre inicialize suas vari�veis

	int vogalMinuscula = 0, vogalMaiuscula = 0;

	std::cout << "Digite um caractere: ";
	std::cin >> c;

	// ser� um se for vogal e letra min�scula
	vogalMinuscula = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

	// ser� um se for uma vogal mai�scula
	vogalMaiuscula = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

	// evaluates to 1 (true) if either isLowercaseVowel or isUppercaseVowel is true
	if (vogalMinuscula || vogalMaiuscula)
		std::cout << c << " � uma vogal." << std::endl;  
	else
		std::cout << c << " n�o � uma vogal." << std::endl;

	//em windows, enquanto estiver aprendendo pode substituir as
	//tr�s linhas a seguir por system("Pause"); 
	//mas vamos tentar n�o usar system j� que � exclusivo do windows. 
	std::cout << "Pressione Enter para continuar...";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();

	return 0;
}