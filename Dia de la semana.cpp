#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	//variable de tipo entero, que el usuario va a ingresar
	int diaDeLaSemana;
	//pedimos al  usuario que ingrese el dia
	cout << "Ingrese el dia de la semana\n";
	//el valor que el usuario ingresara
	cin >> diaDeLaSemana;
	/*
	El 1 es lunes, el 2 es martes, el 3 es miercoles
	el 4 es jueves, el 5 es viernes, el 6 es sabado 
	y el 7 es el domingo 
	*/
	switch(diaDeLaSemana)
	{
		/*dependiendo del dato de la variable diaDeLaSemana
		se ejecutara cierto case y se imprimira el dia
		*/
		case 1: 
		cout << "Hoy es lunes";
		break;
		case 2: 
		cout << "Hoy es martes";
		break;
		case 3:
		cout << "Hoy es miercoles";
		break;
		case 4: 
		cout << "Hoy es jueves";
		break;
		case 5: 
		cout << "Hoy es viernes";
		break;
		case 6: 
		cout << "Hoy es sabado";
		break;
		case 7: 
		cout << "Hoy es domingo";
		break;
		/*
		uso default por si no se ingreso del numero 1 al 7 correctamente
		no se ejecutara ningun case y se controlara
		*/
		default: 
		cout << "Valores incorrectos";
	}
	return 0;
}
