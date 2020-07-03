#include "Matriz.h"

Matriz::Matriz()
{
	
}

Matriz::Matriz(int Dsize ,char Did){
	size=Dsize;
	Did=id;
	contenido =NULL;
	contenido=new int*[size];
	for(int i =0 ; i<size; i++){
		contenido[i]=new int[size];
	}
	
}
void Matriz::meterContenido(vector<int> numeros){
	int pos=0;
	for(int i =0 ; i<size;i++){
		for(int j =0 ; j<size;j++){
			contenido[i][j]=numeros[pos];
			pos++;
		}
	}
}
int**Matriz::getContenido(){
	return contenido;	
}

int** Matriz::suma(int**contm1,int**contm2){
	int**retcontenido;
	for(int i =0 ;i<size;i++){
		for(int j =0;j<size;i++){
			retcontenido[i][j]=contm1[i][j]+contm2[i][j];
		}
	}
	return retcontenido;
}

int**Matriz::resta(int**contm1,int**contm2){
	int**retcontenido;
	for(int i =0 ;i<size;i++){
		for(int j =0;j<size;i++){
			retcontenido[i][j]=contm1[i][j]-contm2[i][j];
		}
	}
	return retcontenido;
}
int** Matriz::multiplicacion(int**contm1,int**contm2){
	int**retcontenido;
	for(int i =0 ;i<size;i++){
		for(int j =0;j<size;i++){
			//retcontenido[i][j]=contm1[i][j]-contm2[i][j];
			int acum =0 ;
			for(int k =0 ; k < size;k++){
				acum+=contm1[i][k]*contm2[k][j];
			}
			retcontenido[i][j]=acum;
		}
	}
	return retcontenido;
}

Matriz::~Matriz()
{
	
}
