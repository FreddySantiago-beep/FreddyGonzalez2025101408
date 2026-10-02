#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int contador = 1;
	while(contador < 100)
	{
		cout << contador << endl;
		contador--;//decrementa en 1
	}
	system("PAUSE");
	return EXIT_SUCCESS;
}
