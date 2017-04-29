/*
* Exemplo do uso do operador tern�rio condicional (?), 
* Trata-se de um operador que avalia uma compara��o e devolve um resultado num�rico
*	Fa�a um programa que devolva o maior n�mero entre tr�s inteiros digitados pelo usu�rio
*/

//biblioca contendo as defini��es dos objetos padr�es 
//de entrada e sa�da
#include <iostream>
#include <locale> //imprimir em pt-br no windows

int main()
{
	setlocale(LC_ALL, "portuguese");//para imprimir em pt-br no windows
																	//sempre incialize sua vari�vel

		int a, b, c, maior;
	
	std::cout << "Digite tr�s numeros inteiros separdos por espa�o: ";
	//voc� pode usar o cin para ler v�rios n�meros em uma �nica digita��o
	std::cin >> a >> b >> c;
	//usando o operador tern�rio condicional
	maior = a>b ? (a>c ? a : c) : (b>c ? b : c);
	
	std::cout << "O maior n�mero �: " << maior << std::endl; 

	//em windows, enquanto estiver aprendendo pode substituir as
	//tr�s linhas a seguir por system("Pause"); 
	//mas vamos tentar n�o usar system j� que � exclusivo do windows. 
	std::cout << "Pressione Enter para continuar...";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();

	return 0;
}