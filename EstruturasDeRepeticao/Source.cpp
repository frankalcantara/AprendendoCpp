/*
* Exemplo do uso de if, considerando as estruturas if, if/else e if/else if/else
* Faça um progra que imprima o status de um aluno de acordo com a sua média sabendo que:
*    para media maior ou igual a 7 o status é aprovado;
*    para média maior ou igual a 5 e menor que 7 o status é em exame; 
*    para média menor que 5 o status é reprovado.
*/

//biblioca contendo as definições dos objetos padrões 
//de entrada e saída
#include <iostream>
#include <locale> //imprimir em pt-br no windows

//define o uso do namespace std onde estão definidos 
//os tipos, classes, funções e constructors da biblioteca padrão do C++
//se definir o uso de namespace não precisará se preocupar 
//em qualificar cada constructor da biblioteca padrão ou de 
//qualquer outra biblioteca de usar mas, corre o risco de ter 
//problemas de colisão.
//using namespace std;

//não existe, nem em C nem em C++ um void main ou um double main
//existe, por outro lado: int main(int argc, char* argv[]) { /* ... */ }
//podem até existir definições desta função que estejam em conformidade 
//com o padrão iso mas, todas elas precisam devolver um inteiro
int main()
{
	setlocale(LC_ALL, "portuguese");//para imprimir em pt-br no windows
	//sempre incialize sua variável
	double media = 0.0;

	//cout é o objeto que escreve no dispositivo padrão
	std::cout << "Digite a média do aluno: ";
	//cin é objeto que lê o dispositivo padrão
	std::cin >> media;

	// Usamos o if para checar o número 
	if (media >= 7){
		//se a condição for verdadeira, estas declarações serão executadas
		//std::endl é o fim de linha
		std::cout << "A média foi: " << media << "o aluno está aprovado" << std::endl;
	}	else if (media >= 5 && media < 7) {
		std::cout << "A média foi: " << media << "o aluno está em exame" << std::endl;
	}	else {
		std::cout << "A média foi: " << media << "o aluno está reprovado" << std::endl;
	}

	//esta é uma linha fora do if
	std::cout << "Esta linha será sempre executada."<<std::endl;
	
	//em windows, enquanto estiver aprendendo pode usar o system("Pause"); 
	//mas vamos tentar não usar system já que é exclusivo do windows. 
	std::cout << "Pressione Enter para continuar...";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();
	
	return 0;
}