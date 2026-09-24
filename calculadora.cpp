#include <iostream>
#include <cstdlib>
using namespace std;
//declaracion de funciones
float suma(float numero1, float numero2);
float resta(float numero1, float numero2);
float multiplicacion(float numero1, float numero2);
float division(float numero1, float numero2);
int main()
{
	//n1 y n2 son variables de tipo float 
	float n1, n2; 
	cout << "----Calculadora----\n";
	//pedimos alusuario que ingrese los numeros
	cout << "Ingrese el numero 1\n";
	cin >> n1;
	cout <<"Ingrese el numero 2\n";
	cin >> n2;
	if(n1 > 0 && n1 < 100 && n2 > 0 && n2 < 100)
	{
		//llamamos a las funciones declaradas
		cout << "El resultado de la suma es: " << suma(n1, n2)<< "\n";
		cout << "El resultado de la resta es: " << resta(n1, n2)<<"\n";
		cout << "El resultado de la multiplicacion es: " << multiplicacion(n1, n2) << "\n";
		cout << "El resultado de la division es: " << division(n1, n2)<<"\n";
	}
	else
	{
		cout << "Los valores de los numeros deben ser mayor a 0 y menor a 100";
	}
	return 0;
}
/*
devolvemos los resultados con return dentro 
de las funciones a int main
*/
float suma(float numero1, float numero2)
{
	return numero1 + numero2; 
}
float resta(float numero1, float numero2)
{
	return numero1 - numero2; 
}
float multiplicacion(float numero1, float numero2)
{
	return numero1 * numero2; 
}
float division(float numero1, float numero2)
{
	return numero1/numero2; 
}
