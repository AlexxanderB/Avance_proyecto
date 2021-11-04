#include "Matriz.hpp"


Matriz::Matriz(int filas, int columnas){
	this->filas=filas;
	this->columnas=columnas;
	
	for(int filas= 0;filas<m;filas++){
		for(int columnas = 0;columnas <m;columnas++){
			cout<<"Digite un numero ["<<filas<<"]["<<columnas<<"]"<<endl;
			cin>>M[filas][columnas];	
		}
	}
	
}

void Matriz::RellenarMatriz(){
	for(int filas= 0;filas<m;filas++){
		for(int columnas = 0;columnas <m;columnas++){
			cout<<"Digite un numero ["<<filas<<"]["<<columnas<<"]"<<endl;
			cin>>M[filas][columnas];	
		}
	}
}


