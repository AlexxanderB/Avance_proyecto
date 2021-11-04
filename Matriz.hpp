#include<iostream>
using std::endl;
using std::cout;
using std::cin;

#include<cstring>
using std::strlen;
using std::strcpy;


class Matriz{
	
	public:
		Matriz(int , int);
		void RellenarMatriz();
		
	private:
		int filas, columnas;
		int M[][];
};



