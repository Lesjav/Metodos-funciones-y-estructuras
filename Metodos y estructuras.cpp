#include<iostream>

using namespace std;
struct Estudiante{
	int *codigo;
	string *nombre;
};
void mostrar_notas(int **p_matriz,int fila,int columna);
int main(){
int fila_estudiante=0,columna_notas=0,**pm_notas;


Estudiante estudiante;
cout<<"Cuantos Estudiantes Desea Ingresar: ";
cin>>fila_estudiante;	
cout<<"Cuantas Notas Desea Ingresar: ";
cin>>columna_notas;	
pm_notas = new  int *[fila_estudiante];
estudiante.codigo = new int [fila_estudiante];
estudiante.nombre = new string [fila_estudiante];
for (int i=0;i<fila_estudiante;i++){
pm_notas[i] = new int[columna_notas];
 	
}
cout<<"--------------Ingrese Notas--------------"<<endl;
string nombre;
for (int i=0;i<fila_estudiante;i++){
	cout<<"Codigo: ";
	cin>>estudiante.codigo[i];
	cin.ignore();
	cout<<"Nombre: ";
	getline(cin,estudiante.nombre[i]);
	
	
for (int ii=0;ii<columna_notas;ii++){
	cout<<"Nota: "<<ii<<":";
	cin>>*(*(pm_notas+i)+ii);
	}
	cout<<"----------------------------------------"<<endl;
}

for (int i=0;i<fila_estudiante;i++){
	cout<<"Codigo: "<<estudiante.codigo[i]<<" Estudiante: "<<estudiante.nombre[i]<<"."<<endl;
for (int ii=0;ii<columna_notas;ii++){
	cout<<"Nota ["<<ii + 1 <<"]: "<<*(*(pm_notas+i)+ii);
	cout<<endl;
}
	cout<<"----------------------------------------"<<endl;
}
delete [] pm_notas;
delete [] estudiante.codigo;
delete [] estudiante.nombre;


	system("PAUSE");
	return 0;
	
	
}

void mostrar_notas(int **p_matriz,int fila,int columna){
	cout<<"--------------Mostrar Notas--------------"<<endl;
for (int i=0;i<fila;i++){
for (int ii=0;ii<columna;ii++){
	cout<<*(*(p_matriz+i)+ii)<<endl;
	}
}

	
}

