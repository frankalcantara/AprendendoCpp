/*
* Exemplo do uso do operador ternário condicional (?), 
* Trata-se de um operador que avalia uma comparação e devolve um resultado numérico
*	Faça um programa que devolva o maior número entre três inteiros digitados pelo usuário
*/

//biblioca contendo as definições dos objetos padrões 
//de entrada e saída
#include <iostream>
#include <locale> //imprimir em pt-br no windows

int main()
{
	setlocale(LC_ALL, "portuguese");//para imprimir em pt-br no windows
																	//sempre incialize sua variável

		int a, b, c, maior;
	
	std::cout << "Digite três numeros inteiros separdos por espaço: ";
	//você pode usar o cin para ler vários números em uma única digitação
	std::cin >> a >> b >> c;
	//usando o operador ternário condicional
	maior = a>b ? (a>c ? a : c) : (b>c ? b : c);
	
	std::cout << "O maior número é: " << maior << std::endl; 

	//em windows, enquanto estiver aprendendo pode substituir as
	//três linhas a seguir por system("Pause"); 
	//mas vamos tentar não usar system já que é exclusivo do windows. 
	std::cout << "Pressione Enter para continuar...";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();

	return 0;
}