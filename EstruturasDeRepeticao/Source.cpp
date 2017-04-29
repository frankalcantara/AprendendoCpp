/*
* Exemplo do uso de if, considerando as estruturas if, if/else e if/else if/else
* Fa�a um progra que imprima o status de um aluno de acordo com a sua m�dia sabendo que:
*    para media maior ou igual a 7 o status � aprovado;
*    para m�dia maior ou igual a 5 e menor que 7 o status � em exame; 
*    para m�dia menor que 5 o status � reprovado.
*/

//biblioca contendo as defini��es dos objetos padr�es 
//de entrada e sa�da
#include <iostream>
#include <locale> //imprimir em pt-br no windows

//define o uso do namespace std onde est�o definidos 
//os tipos, classes, fun��es e constructors da biblioteca padr�o do C++
//se definir o uso de namespace n�o precisar� se preocupar 
//em qualificar cada constructor da biblioteca padr�o ou de 
//qualquer outra biblioteca de usar mas, corre o risco de ter 
//problemas de colis�o.
//using namespace std;

//n�o existe, nem em C nem em C++ um void main ou um double main
//existe, por outro lado: int main(int argc, char* argv[]) { /* ... */ }
//podem at� existir defini��es desta fun��o que estejam em conformidade 
//com o padr�o iso mas, todas elas precisam devolver um inteiro
int main()
{
	setlocale(LC_ALL, "portuguese");//para imprimir em pt-br no windows
	//sempre incialize sua vari�vel
	double media = 0.0;

	//cout � o objeto que escreve no dispositivo padr�o
	std::cout << "Digite a m�dia do aluno: ";
	//cin � objeto que l� o dispositivo padr�o
	std::cin >> media;

	// Usamos o if para checar o n�mero 
	if (media >= 7){
		//se a condi��o for verdadeira, estas declara��es ser�o executadas
		//std::endl � o fim de linha
		std::cout << "A m�dia foi: " << media << "o aluno est� aprovado" << std::endl;
	}	else if (media >= 5 && media < 7) {
		std::cout << "A m�dia foi: " << media << "o aluno est� em exame" << std::endl;
	}	else {
		std::cout << "A m�dia foi: " << media << "o aluno est� reprovado" << std::endl;
	}

	//esta � uma linha fora do if
	std::cout << "Esta linha ser� sempre executada."<<std::endl;
	
	//em windows, enquanto estiver aprendendo pode usar o system("Pause"); 
	//mas vamos tentar n�o usar system j� que � exclusivo do windows. 
	std::cout << "Pressione Enter para continuar...";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
	
	return 0;
}