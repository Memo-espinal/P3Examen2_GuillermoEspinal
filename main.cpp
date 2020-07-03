#include <iostream>
#include <string>
#include<vector>
#include <cctype>
#include <iostream>
#include <cstring>
#include "Math.h"
#include "Object.h"
#include "Stack.h"
#include "Node.h"
#include "Matriz.h"
#include "Operador.h"


using namespace std ;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	loop:
	string cadena ;
	cout<<">>";
	getline(cin,cadena);
	int found =cadena.find('=');
	if(found<cadena.length()){
		vector<int>numeros;
		char id=cadena[1];
		for(int i =1 ; i <= cadena.length() ;i++ ){
			if(isdigit(cadena[i])){
				numeros.push_back(cadena[i]);
			}
		}
		int size= sqrt(numeros.size()) ;
		Matriz* nueva= new Matriz(size,id);
		nueva->meterContenido(numeros);
		cout<<"matriz creada"<<endl;
//		for(int i =0 ; i <){
//			
//		}
	}
	return 0;
}

