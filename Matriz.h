#ifndef MATRIZ_H
#define MATRIZ_H
#include <vector>
#include <iostream>
using namespace std;

#include "Object.h"

class Matriz : public Object
{
	public:
		Matriz();
		Matriz(int,char);
		void meterContenido(vector<int>);
		char getId();
		int getSize();
		int**getContenido();
		int** suma(int**contm1,int**contm2);
		int** resta(int**contm1,int**contm2);
		int** multiplicacion(int**contm1,int**contm2);
		~Matriz();
	
	protected:
	
	private:
		int size;
		char id;
		int** contenido;		
};
//De cada matriz debe almacenar su
//tamaño, su nombre identificador que será un solo
//caracter y las entradas de la matriz, estas serán
//guardadas en un arreglo bidimensional de enteros con
//memoria dinámica

#endif
