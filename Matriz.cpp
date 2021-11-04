#include "Matriz.hpp"


Matriz::Matriz(int filas, int columnas){
	this->filas=filas;
	this->columnas=columnas;
	
}

void Matriz::RellenarMatriz(){
	for(int i= 0;i<filas;i++){
		for(int j= 0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]"<<endl;
			cin>>M[i][j];	
		}
	}
}


