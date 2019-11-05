#include <iostream>
#include <string>
using namespace std;


int main()//comienzo del programa
{
	double numero1;//float para menos decimales double es mejor para eso
	double numero2;
	double total;
	char operacion;
	bool calculadora = true;
	cout << "escribe que operacion quieres: ";
	cin >> operacion;
	switch (operacion)
	{
	case '+':
		cout << "escribe el primer numero: ";
		cin >> numero1;
		cout << "escribe el segundo numero: ";
		cin >> numero2;
		total = numero1 + numero2;
		total;
		cout <<  "total: " << total << endl;
		break;
	case '-':
		cout << "escribe el primer numero: ";
		cin >> numero1;
		cout << "escribe el segundo numero: ";
		cin >> numero2;
		total = numero1 - numero2;
		total;
		cout << "total: " << total << endl;
		break;
	case '*':
		cout << "escribe el primer numero: ";
		cin >> numero1;
		cout << "escribe el segundo numero: ";
		cin >> numero2;
		total = numero1 * numero2;
		total;
		cout << "total: " << total << endl;
		break;
	case '/':
		cout << "escribe el primer numero: ";
		cin >> numero1;
		cout << "escribe el segundo numero: ";
		cin >> numero2;
		total = numero1 / numero2;
		total;
		cout << "total: " << total << endl;

		break;
	}//fin de switch
	while (calculadora = true)
	{
		
		cout << "escriba la operacion que quiere agreagar a su resultado: ";
		cin >> operacion;
		switch (operacion)
		{
		case '+':
			cout << "escribe  el numero que quieres agregar: ";
			cin >> numero1;
			total = total + numero1;
			total;
			cout << "total: " << total << endl;
			break;
		case '-':
			cout << "escribe  el numero que quieres agregar: ";
			cin >> numero1;
			total = total - numero1;
			total;
			cout << "total: " << total << endl;
			break;
		case '*':
			cout << "escribe  el numero que quieres agregar: ";
			cin >> numero1;
			total = total * numero1;
			total;
			cout << "total: " << total << endl;
			break;
		case '/':
			cout << "escribe  el numero que quieres agregar: ";
			cin >> numero1;
			total = total / numero1;
			total;
			cout << "total: " << total << endl;
			break;
		}//fin de switch
		
	}//fin de while
}//fin de main