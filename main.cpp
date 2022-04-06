#include <stdio.h>
#include <iostream>
#include <time.h>
#include "Matriz.hpp"
using namespace std;

int main(){
    int o;
	
	cout << "Ordem da matriz:";
	cin >> o;

	cout << "\n\njeito certo: \n";
	 Matriz k(o);
	 k.setOrdem(o);
	 
	 cout << "\n";
	 k.imprimeMatriz();
	 cout << "\n\n\n";
	 k.conta();
	 k.imprimeMatriz();
	 
	 cout << "\n\nTotal: " << k.getTotal(); ;
	 
	return 0;
}
