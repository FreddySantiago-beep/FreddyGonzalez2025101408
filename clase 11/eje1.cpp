#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	//defino la variable
	char caracter;
	//uso do-while para determinar si se ha ingresado cualquier vocal minuscula y terminar el bucle
	do 
	{
		cout << "Ingrese un caracter\n";
		cin >> caracter;
	}while(caracter != 'a' && caracter != 'e' && caracter != 'i' && caracter != 'o' && caracter != 'u');
	system("PAUSE");
	return EXIT_SUCCESS;
}
