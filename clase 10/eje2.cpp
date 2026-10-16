#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	/*
	Defino las variables.
	"i" es la variable de control de bucle
	"resultado" es la variable para verificar si es par o impar, es decir, si es cero es par y si no es impar
	la variable "c" es para contar cuantos numeros se han encontrado, enumerando uno a uno
	*/
	int i,resultado;
	int c = 0;
	for(i=1; i <= 12; i++)
	{
		resultado = i - (i/2)*2;
		if(resultado==0)
		{
			c = c + 1;
			cout << "El numero " << c << " impar es: " << i<<"\n";
		}
	}
}
