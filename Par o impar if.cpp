#include <iostream>
using namespace std;
main()
{
	//determinar si un numero es pa o impar
	int num=0;
	cout<<"Ingrese numero: ";
	cin>>num;
	//dividir un numero entre dos su residuo es cero entonces es par caso contrario es impar
	if((num%2)==0)
	{
		cout<<"Par"<<endl;
	}else
	{
		cout<<"Impar"<<endl;
	}
	system("pause");
}
