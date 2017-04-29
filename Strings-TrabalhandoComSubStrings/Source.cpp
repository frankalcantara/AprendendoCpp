/*
* Em C++, na biblioteca padrão strings são objetos que representam sequências de caracteres e, como objetos,  
*
*
*	Exemplos de como detectar que uma determinada string representa um nome de arquivo contendo uma extensão
* para este exemplo usaremos duas strings pré definidas em busca da terminação .docx
* 
*/

//biblioca contendo as definições dos objetos padrões 
//de entrada e saída
#include <iostream>
#include <locale> //imprimir em pt-br no windows

int main()
{
	setlocale(LC_ALL, "portuguese");//para imprimir em pt-br no windows
	std::string extensao = ".docx";
	std::string str1 = "teste.docx"; 
	std::string str2 = "teste.xlsx";
	
		/*
			Usando o método substr
			string substr (size_t pos = 0, size_t len = npos) const;

			Este método devolve um objeto do tipo string já inicializado com
			uma fração da string original.

			size_t um unsigned int que representa o tamanho de um objeto em bytes

			Devolve:
			o substring especificado.
		*/
		std::cout << "Usando o método substr em : " << str1 << std::endl;
		if (str1.substr(str1.length() - 5, str1.length()) == extensao){
			std::cout << "O " << str1 << " possui a extensão .docx!!!" << std::endl;
		}
		else{
			std::cout << "O " << str1 << " não possui a extensão .docx!!!" << std::endl;
		}

		std::cout << "Usando o método substr em : " << str2 << std::endl;
		if (str2.substr(str2.length() - 5, str2.length()) == extensao) {
			std::cout << "O " << str2 << " possui a extensão .docx!!!" << std::endl;
		}
		else {
			std::cout << "O " << str2 << " não possui a extensão .docx!!!" << std::endl;
		}
		
		/*
			Usando o método compare
			string 	
				int compare (const string& str) const noexcept;
			substrings 	
			int compare (size_t pos, size_t len, const string& str) const;
			int compare (size_t pos, size_t len, const string& str,
									 size_t subpos, size_t sublen = npos) const;
			Devolve: 
			0		se os dois objetos comparados forem iguais
			< 0	Se o primeiro caraceter que não coincide for menor ou se todos os caractes são iguais mas a string comparada é menor.
			> 0	Se o primeiro caraceter que não coincide for maior ou se todos os caractes são iguais mas a string comparada é maior.
		*/
		std::cout << std::endl;
		std::cout << "Usando o método compare em : " << str1 << std::endl;
		if (!str1.compare(str1.length() - 5, str1.length(), extensao)) {
			std::cout << "O " << str1 << " possui a extensão .docx!!!" << std::endl;
		}
		else {
			std::cout << "O " << str1 << " não possui a extensão .docx!!!" << std::endl;
		}

		std::cout << "Usando o método compare em : " << str2 << std::endl;
		if (!str2.compare(str2.length() - 5, str2.length(), extensao)) {
			std::cout << "O " << str2 << " possui a extensão .docx!!!" << std::endl;
		}
		else {
			std::cout << "O " << str2 << " não possui a extensão .docx!!!" << std::endl;
		}

		/*
			Usando o método find
			size_t find (const string& str, size_t pos = 0) const noexcept;
			c-string 
			size_t find (const char* s, size_t pos = 0) const;

			Devolve:
			a posição do primeiro caracter que correspende ao string pesquisado;
			se for especificado um string para pesquisa todo o string deve ser encontrado;
			pode usar um ponteiro para um char como argumento;
			se posição de início for especificada todas as coincidências antes dessa posição serão iguinoradas.
			Se não encontrar o string desejado devlove std::npos


		*/
		std::cout << std::endl;
		std::cout << "Usando o método find em : " << str1 << std::endl;
		if (str1.find(extensao) != str1.npos) {
			std::cout << "O " << str1 << " possui a extensão .docx!!!" << std::endl;
		}
		else {
			std::cout << "O " << str1 << " não possui a extensão .docx!!!" << std::endl;
		}
		std::cout << std::endl;
		std::cout << "Usando o método find em : " << str2 << std::endl;
		if (str2.find(extensao) != str2.npos) {
			std::cout << "O " << str2 << " possui a extensão .docx!!!" << std::endl;
		}
		else {
			std::cout << "O " << str2 << " não possui a extensão .docx!!!" << std::endl;
		}
		
		//em windows, enquanto estiver aprendendo pode substituir as
	//três linhas a seguir por system("Pause"); 
	//mas vamos tentar não usar system já que é exclusivo do windows. 
	std::cout << "Pressione Enter para encerrar...";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();

	return 0;
}