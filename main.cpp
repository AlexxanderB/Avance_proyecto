#include "Matriz.hpp"

int main (){
	
	int Selec_Fun, opcion;
	int filas, columnas;
	
	cout<<"\t\tMath\n"<<endl;
	cout<<"Tu Calculadora de Matrices Online\n"<<endl;
    cout<<"Seleciona la funcionalidad"<<endl;
    cout<<"1.Operaciones con Matrices     2.Solucion de Sistemas"<<endl;
    cin>>Selec_Fun;
	
	switch(Selec_Fun){
		case 1:
			cout<<"Operaciones con Matrices\n"<<endl;
			cout<<"Seleccione la operacion a realizar\n"<<endl;
			cout<<"1.Suma de dos Matrices   2.Producto de dos Matrices   3.Multiplicacion por un Escalar"<<endl;
			cin>>opcion;
			
			switch(opcion){
				case 1:
					cout<<"Suma de dos matrices"<<endl;
					cout<<"Recuerde ingresar los datos de una matriz cuadrada"<<endl;
					cout<<"Ingrese el numero de filas"<<endl;
					cin>>filas;
					cout<<"Ingrese el numero de columnas"<<endl;
					cin>>columnas;
					cout<<"Matriz de "<<filas<< " x "<<columnas<<endl;
					cout<<"Ingrese los Datos de su matriz A"<<endl;
					Matriz matriz1(filas,columnas);
					matriz1.RellenarMatriz();			
	       }
		break;
		case 2:
			cout<<"Solucion de Sistemas por Gauss Jordan"<<endl;
		break;
		default:
			cout<<"Funcionalidad no valida"<<endl;
	}
	return 0;
}







