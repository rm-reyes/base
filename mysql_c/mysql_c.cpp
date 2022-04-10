// mysql_c.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

#include "Cliente.h"

using namespace std;
//int q_estado;
int main()
{
	string nit, nombres, apellidos, direccion, fecha_nacimiento;
	int telefono;

	cout << "ingrese Nit: ";
	getline(cin, nit);
	cout << "ingrese nombres: ";
	getline(cin, nombres);
	cout << "ingrese apellidos: ";
	getline(cin, apellidos);
	cout << "ingrese direccion: ";
	getline(cin, direccion);
	cout << "ingrese telefono: ";
	cin >> telefono;
	cin.ignore();
	cout << "ingrese fecha de nacimiento: ";
	cin >> fecha_nacimiento;

	Cliente c = Cliente(nombres, apellidos, direccion, telefono, fecha_nacimiento, nit);
	c.crear();
	c.leer();
	system("pause");
	return 0;



}



	/*MYSQL* conectar;
	MYSQL_ROW fila;
	MYSQL_RES* resultado;
	conectar = mysql_init(0);


	conectar = mysql_real_connect(conectar, "localhost", "usr_empresa", "empres@123", "db_empresa", 3306, NULL, 0);
	if (conectar) {

		string puesto;
		cout << "ingrese puesto: ";
		cin >> puesto;
		string insert = "insert into puestos (puesto) values ('" + puesto + " ')";
		const char* i = insert.c_str();
		q_estado = mysql_query(conectar, i);


		if (!q_estado) {
			cout << "ingreso exitoso" << endl; }
	}
	else {

		cout << "error en el ingreso" << endl; }


		string consulta = "select * from puestos";
		const char* c = consulta.c_str();
		q_estado = mysql_query(conectar, c);
		if (!q_estado) {
			resultado = mysql_store_result(conectar);
			while (fila = mysql_fetch_row(resultado)) {
				cout << fila[0] << "." << fila[1] << endl;

			}

		}
		else {

			cout << "error al consultar" << endl;
		}*/
	
	


