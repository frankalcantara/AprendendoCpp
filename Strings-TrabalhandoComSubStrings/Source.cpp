/*
* Em C++, na biblioteca padr�o strings s�o objetos que representam sequ�ncias de caracteres e, como objetos,  
*
*
*	Exemplos de como detectar que uma determinada string representa um nome de arquivo contendo uma extens�o
* para este exemplo usaremos duas strings pr� definidas em busca da termina��o .docx
* 
*/

//biblioca contendo as defini��es dos objetos padr�es 
//de entrada e sa�da
#include <iostream>
#include <locale> //imprimir em pt-br no windows

int main()
{
	setlocale(LC_ALL, "portuguese");//para imprimir em pt-br no windows
	std::string extensao = ".docx";
	std::string str1 = "teste.docx"; 
	std::string str2 = "teste.xlsx";
	
		/*
			Usando o m�todo substr
			string substr (size_t pos = 0, size_t len = npos) const;

			Este m�todo devolve um objeto do tipo string j� inicializado com
			uma fra��o da string original.

			size_t um unsigned int que representa o tamanho de um objeto em bytes

			Devolve:
			o substring especificado.
		*/
		std::cout << "Usando o m�todo substr em : " << str1 << std::endl;
		if (str1.substr(str1.length() - 5, str1.length()) == extensao){
			std::cout << "O " << str1 << " possui a extens�o .docx!!!" << std::endl;
		}
		else{
			std::cout << "O " << str1 << " n�o possui a extens�o .docx!!!" << std::endl;
		}

		std::cout << "Usando o m�todo substr em : " << str2 << std::endl;
		if (str2.substr(str2.length() - 5, str2.length()) == extensao) {
			std::cout << "O " << str2 << " possui a extens�o .docx!!!" << std::endl;
		}
		else {
			std::cout << "O " << str2 << " n�o possui a extens�o .docx!!!" << std::endl;
		}
		
		/*
			Usando o m�todo compare
			string 	
				int compare (const string& str) const noexcept;
			substrings 	
			int compare (size_t pos, size_t len, const string& str) const;
			int compare (size_t pos, size_t len, const string& str,
									 size_t subpos, size_t sublen = npos) const;
			Devolve: 
			0		se os dois objetos comparados forem iguais
			< 0	Se o primeiro caraceter que n�o coincide for menor ou se todos os caractes s�o iguais mas a string comparada � menor.
			> 0	Se o primeiro caraceter que n�o coincide for maior ou se todos os caractes s�o iguais mas a string comparada � maior.
		*/
		std::cout << std::endl;
		std::cout << "Usando o m�todo compare em : " << str1 << std::endl;
		if (!str1.compare(str1.length() - 5, str1.length(), extensao)) {
			std::cout << "O " << str1 << " possui a extens�o .docx!!!" << std::endl;
		}
		else {
			std::cout << "O " << str1 << " n�o possui a extens�o .docx!!!" << std::endl;
		}

		std::cout << "Usando o m�todo compare em : " << str2 << std::endl;
		if (!str2.compare(str2.length() - 5, str2.length(), extensao)) {
			std::cout << "O " << str2 << " possui a extens�o .docx!!!" << std::endl;
		}
		else {
			std::cout << "O " << str2 << " n�o possui a extens�o .docx!!!" << std::endl;
		}

		/*
			Usando o m�todo find
			size_t find (const string& str, size_t pos = 0) const noexcept;
			c-string 
			size_t find (const char* s, size_t pos = 0) const;

			Devolve:
			a posi��o do primeiro caracter que correspende ao string pesquisado;
			se for especificado um string para pesquisa todo o string deve ser encontrado;
			pode usar um ponteiro para um char como argumento;
			se posi��o de in�cio for especificada todas as coincid�ncias antes dessa posi��o ser�o iguinoradas.
			Se n�o encontrar o string desejado devlove std::npos


		*/
		std::cout << std::endl;
		std::cout << "Usando o m�todo find em : " << str1 << std::endl;
		if (str1.find(extensao) != str1.npos) {
			std::cout << "O " << str1 << " possui a extens�o .docx!!!" << std::endl;
		}
		else {
			std::cout << "O " << str1 << " n�o possui a extens�o .docx!!!" << std::endl;
		}
		std::cout << std::endl;
		std::cout << "Usando o m�todo find em : " << str2 << std::endl;
		if (str2.find(extensao) != str2.npos) {
			std::cout << "O " << str2 << " possui a extens�o .docx!!!" << std::endl;
		}
		else {
			std::cout << "O " << str2 << " n�o possui a extens�o .docx!!!" << std::endl;
		}
		
		//em windows, enquanto estiver aprendendo pode substituir as
	//tr�s linhas a seguir por system("Pause"); 
	//mas vamos tentar n�o usar system j� que � exclusivo do windows. 
	std::cout << "Pressione Enter para encerrar...";
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cin.get();

	return 0;
}