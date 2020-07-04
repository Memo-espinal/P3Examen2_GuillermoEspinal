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
#include <fstream>


using namespace std ;
vector<Matriz*>matrices;

void Escribir(Matriz* matriz){
	ofstream escribir ;
	int** sostener= matriz->getContenido();
	int size= matriz->getSize();
	escribir.open("matrices.txt",ios::app);
	if(escribir.is_open()){
		escribir<<matriz->getId()<<size;
		for(int i =0 ; i<size;i++){
			for(int j =0 ;j<size;j++){
				string num = to_string(sostener[i][j]);
				//cout<< sostener[i][j];
				//cout<<"--------";
				//cout<<num;
				escribir <<	num;//to_string(sostener[i][j]);
			}
		}
		escribir<<"\n";
	}
	escribir.close();
}
void Leer(){
	Stack* nose = new Stack();
	
	ifstream leer;
	leer.open("matrices.txt");
	string buffer;
	if(leer.is_open()){
		while(getline(leer,buffer)){
		if(buffer.length()>0){
			char id=buffer[0];
			int size=buffer[1];
			vector<int>numeros;
			for(int i =2 ;i<buffer.length();i++){
				numeros.push_back(buffer[i]-48);
			}
			Matriz* nuv = new Matriz(size,id);
			nuv->meterContenido(numeros);
			matrices.push_back(nuv);
			Node* sepa = new Node();
			sepa->setData(nuv);
			nose->push(sepa);
			
		}
		}
	}
	leer.close();
	
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	loop:
	Leer();
	cout<<"matrices: "<<matrices.size()<<endl;
	string cadena ;
	cout<<">>";
	getline(cin,cadena);
	int found =cadena.find('=');
	if(found<cadena.length()){
		vector<int>numeros;
		char id=cadena[0];
		for(int i =1 ; i <= cadena.length() ;i++ ){
			if(isdigit(cadena[i])){
				numeros.push_back(cadena[i]-48);
			}
		}
		int size= sqrt(numeros.size()) ;
		Matriz* nueva= new Matriz(size,id);
		nueva->meterContenido(numeros);
		int**mat=nueva->getContenido();
		cout<<"matriz creada"<<endl;
		for(int i=0; i<size;i++){
			for(int j =0 ;j<size;j++){
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
		Escribir(nueva);
		goto loop;	
	}else{
		
			
	}
	if(cadena=="exit"){
		cout<<"bye"<<endl;
	}
	
	return 0;
}

