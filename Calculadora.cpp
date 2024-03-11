#include <iostream>>
using namespace std;
int main(){
	int opcion=0;
	cout<<"Calculadora en C++";
	cout<<"\n------------------";
	cout<<"\nSeleccione una opcion :";
	cout<<"\nEscriba 1 si desea sumar ";
	cout<<"\nEscriba 2 si desea restar ";
	cout<<"\nEscriba 3 si desea multiplicar ";
	cout<<"\nEscriba 4 si desea dividir ";
	cout<<"\n--------------------------------\n";
	cin>>opcion;
	float a=0;
	float b=0;
	float resultado=0;
	switch(opcion) {
		case 1 :
			cout<<"Ingrese los 2 numeros que desea sumar : \n";
			cin>>a;
			cout<<"\nSegundo Numero por favor\n";
			cin>>b;
			resultado=a+b;
			cout<<"\nEl resultado es de : "<<resultado;

			break;
		case 2:
			cout<<"Ingrese los 2 numeros que desea Restar : \n";
			cin>>a;
			cout<<"\nSegundo Numero por favor\n";
			cin>>b;
			resultado=a-b;
			cout<<"\nEl resultado es de : "<<resultado;
			break;
		case 3:
			cout<<"Ingrese los 2 numeros que desea Multiplicar : \n";
			cin>>a;
			cout<<"\nSegundo Numero por favor\n";
			cin>>b;
			resultado=a*b;
			cout<<"\nEl resultado es de : "<<resultado;
			break;
		case 4:
			cout<<"Ingrese los 2 numeros que desea Dividir : \n";
			cin>>a;
			cout<<"\nSegundo Numero por favor\n";
			cin>>b;
			resultado=a/b;
			cout<<"\nEl resultado es de : "<<resultado;
	}
	
			

	


}
