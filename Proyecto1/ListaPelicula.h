#ifndef ListaPelicula_H
#define ListaPelicula_H
#include <iostream>

#pragma once
#include "NodoPelicula.h"
using namespace std;
class ListaPelicula
{
private:
	int aContador;

	NodoPelicula* aNodoPelicula;

public:
	ListaPelicula();
	~ListaPelicula(void);
	//Metodos encargados de agregar
	void AgregaInicio(string, string, string, string, string, string);
	void Agrega(string, string, string, string, string, string, int);
	void AgregaFinal(string, string, string, string, string, string);
	//Metodos encargados de eliminar
	void EliminaInicio();
	void Elimina(int);
	void EliminaFinal();
	//Determina si la lista contiene algun elemento
	bool ListaVacia();
	//Realiza la busqueda en la lista
	bool Busqueda(int);
	//Imprime en pantalla
	string toString();

	
};
#endif

